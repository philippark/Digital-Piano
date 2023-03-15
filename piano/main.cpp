#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

void test(sf::SoundBuffer &buffer){
    buffer.loadFromFile("resources/key20.ogg");

}


int main(){
    //window
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Music Paint");
    window.setVerticalSyncEnabled(true);

    //sprite
    sf::Texture texture;
    if (!texture.loadFromFile("piano2.jpg")){
        std::cerr << "Couldn't load texture" << std::endl;
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);

    int width = sprite.getTexture()->getSize().x;
    int height = sprite.getTexture()->getSize().y;


    sprite.setOrigin(width/2, height);
    sprite.move(1280/2, 720);


    //shape
    int key_width = 50;
    int key_height = key_width * 4;
    sf::RectangleShape rectangle(sf::Vector2f(key_width, key_height));


    //sound
    sf::SoundBuffer c_buffer;
    //c_buffer.loadFromFile("resources2/c3.ogg");
    test(c_buffer);
    sf::Sound c;
    c.setBuffer(c_buffer);

    sf::SoundBuffer d_buffer;
    d_buffer.loadFromFile("resources2/d3.ogg");
    sf::Sound d;
    d.setBuffer(d_buffer);

    while (window.isOpen()){
        //init
        rectangle.setFillColor(sf::Color(250, 250, 250));

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            rectangle.setFillColor(sf::Color(128, 128, 128));
        }

        sf::Event event;
        while (window.pollEvent(event)){
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::A){
                        c.play();
                        //rectangle.setFillColor(sf::Color(128, 128, 128));
                    }

                    if (event.key.code == sf::Keyboard::S){
                        d.play();
                    }
                    break;


                default:
                    break;
            }
        }

        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.draw(rectangle);
        window.display();
    }
}



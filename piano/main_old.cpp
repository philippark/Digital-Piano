#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <functional>

/*
class Key{
    public:
    Key(std::string key);
    void playSound();

    private:
    sf::SoundBuffer buffer_;
    sf::Sound sound_;
};

Key::Key(std::string key){
    if (!buffer_.loadFromFile(key)){
        std::cerr << "buffer couldn't load file: " << key << std::endl;
    }
    sound_.setBuffer(buffer_);
}

void Key::playSound(){
    sound_.play();
}


class Keyboard{
    public:
    void add_keys();
    std::vector<Key> get_keys();
    private:
    std::vector<Key> keys;
};

//here add in pitch 
void Keyboard::add_keys(){
    std::string pitch = "3";
    std::string loc = "resources2/_" + pitch + ".ogg";

    loc[11] = 'c';  
    Key c(loc);
    keys.push_back(c);

    loc[11] = 'd';
    Key d(loc);
    keys.push_back(d);
}

std::vector<Key> Keyboard::get_keys(){
    return keys;
}
*/

void test(sf::SoundBuffer &sb, sf::Sound &sound){
    sound.setBuffer(sb);
    sound.play();
}
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setVerticalSyncEnabled(true);

    sf::Texture texture;
    if (!texture.loadFromFile("piano2.jpg")){
        std::cerr << "texter couldn't load" << std::endl;
    }

    sf::Sprite sprite;
    sprite.setTexture(texture);

    std::vector<Key> keys;
    
    std::string pitch = "3";
    std::string loc = "resources2/_" + pitch + ".ogg";

    loc[11] = 'c';  
    Key c(loc);
    keys.push_back(c);

    loc[11] = 'd';
    Key d(loc);
    keys.push_back(d);
    
    //create buffers here, then move around the sounds
    //i need a func that takes pitch, changes key vector elements
    sf::SoundBuffer buffer2;
    buffer2.loadFromFile("canary.wav");
    sf::Sound sound2;
    test(buffer2, sound2);


    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::A){
                        keys[0].playSound();

                    }
                    if (event.key.code == sf::Keyboard::S){
                        keys[1].playSound();
                    }
                    break;
                default:
                    break;
            }
        }

        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();
    }

    return 0;
}
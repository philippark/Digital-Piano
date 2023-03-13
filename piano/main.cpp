#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <functional>

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


void createKeys(std::vector<Key> &keys){
    for (int i = 0; i < 25; i++){
        std::string loc = "resources/key";
        if (i < 10){
            loc += "0" + std::to_string(i) + ".ogg";
        }
        else{
            loc += std::to_string(i) + ".ogg";
        }

        std::cout << loc << std::endl;
        Key current_key(loc);
        keys.push_back(current_key);

    }
}


int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    window.setVerticalSyncEnabled(true);


    std::vector<Key> keys;
    //createKeys(keys);

    Key one("resources/key01.ogg");
    keys.push_back(one);
    Key two("resources/key02.ogg");
    keys.push_back(two);

    
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
                    if (event.key.code == sf::Keyboard::B){
                        keys[1].playSound();
                    }
                    break;
                default:
                    break;
            }
        }
    }

    return 0;
}
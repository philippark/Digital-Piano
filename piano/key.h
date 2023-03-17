#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

class Key{
public:
    Key(int width, int height, std::string note);
    void set_note(sf::SoundBuffer &buffer, std::string loc);
    sf::RectangleShape get_shape();

private:
    std::string note_;
    int width_;
    int height_;
    sf::Sound sound_;
    sf::RectangleShape key_shape_;
};



Key::Key(int width, int height, std::string note){
    width_ = width;
    height_ = height;
    note_ = note;

    sf::RectangleShape shape(sf::Vector2f(width_, height_));
    key_shape_ = shape;
}

void Key::set_note(sf::SoundBuffer &buffer, std::string loc){
    buffer.loadFromFile(loc);
    sound_.setBuffer(buffer);
}

sf::RectangleShape Key::get_shape(){
    return key_shape_;
}
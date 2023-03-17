#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>
#include "key.h"


void createPiano(){
    
}


int main(){
    int key_width = 50;
    int black_key_width = 50;
    int key_height = key_width * 4;
    sf::Color outline_color = sf::Color(0, 0, 0);

    //Load window
    sf::RenderWindow window(sf::VideoMode(key_width * 10, key_height), "Piano");
    window.setVerticalSyncEnabled(true);

    /*
    Creating piano 
    */

    int outline_thickness = 1;

    sf::RectangleShape c_key(sf::Vector2f(key_width, key_height));
    c_key.setOutlineThickness(outline_thickness);
    c_key.setOutlineColor(outline_color);

    sf::RectangleShape cb_key(sf::Vector2f(black_key_width, key_height/2));    
    cb_key.setOutlineThickness(outline_thickness);
    cb_key.setOutlineColor(outline_color); 
    cb_key.move(key_width/2, 0);

    sf::RectangleShape d_key(sf::Vector2f(key_width, key_height));
    d_key.setOutlineThickness(outline_thickness);
    d_key.setOutlineColor(outline_color); 
    d_key.move(key_width, 0);

    sf::RectangleShape db_key(sf::Vector2f(black_key_width, key_height/2));    
    db_key.setOutlineThickness(outline_thickness);
    db_key.setOutlineColor(outline_color);  
    db_key.move(key_width + key_width/2, 0);

    sf::RectangleShape e_key(sf::Vector2f(key_width, key_height));
    e_key.setOutlineThickness(outline_thickness);
    e_key.setOutlineColor(outline_color); 
    e_key.move(key_width*2, 0);

    sf::RectangleShape f_key(sf::Vector2f(key_width, key_height));
    f_key.setOutlineThickness(outline_thickness);
    f_key.setOutlineColor(outline_color); 
    f_key.move(key_width*3, 0);

    sf::RectangleShape fb_key(sf::Vector2f(black_key_width, key_height/2));     
    fb_key.setOutlineThickness(outline_thickness);
    fb_key.setOutlineColor(outline_color); 
    fb_key.move(key_width*3 + key_width/2, 0);

    sf::RectangleShape g_key(sf::Vector2f(key_width, key_height));
    g_key.setOutlineThickness(outline_thickness);
    g_key.setOutlineColor(outline_color); 
    g_key.move(key_width*4, 0);

    sf::RectangleShape gb_key(sf::Vector2f(black_key_width, key_height/2));    
    gb_key.setOutlineThickness(outline_thickness);
    gb_key.setOutlineColor(outline_color);  
    gb_key.move(key_width*4 + key_width/2, 0);

    sf::RectangleShape a_key(sf::Vector2f(key_width, key_height));
    a_key.setOutlineThickness(outline_thickness);
    a_key.setOutlineColor(outline_color); 
    a_key.move(key_width*5, 0);

    sf::RectangleShape ab_key(sf::Vector2f(black_key_width, key_height/2));  
    ab_key.setOutlineThickness(outline_thickness);
    ab_key.setOutlineColor(outline_color);    
    ab_key.move(key_width*5 + key_width/2, 0);

    sf::RectangleShape b_key(sf::Vector2f(key_width, key_height));
    b_key.setOutlineThickness(outline_thickness);
    b_key.setOutlineColor(outline_color); 
    b_key.move(key_width*6, 0);

    sf::RectangleShape c2_key(sf::Vector2f(key_width, key_height));
    c2_key.setOutlineThickness(outline_thickness);
    c2_key.setOutlineColor(outline_color); 
    c2_key.move(key_width*7, 0);

    sf::RectangleShape c2b_key(sf::Vector2f(key_width, key_height/2));
    c2b_key.setOutlineThickness(outline_thickness);
    c2b_key.setOutlineColor(outline_color); 
    c2b_key.move(key_width*7 + key_width/2, 0);

    sf::RectangleShape d2_key(sf::Vector2f(key_width, key_height));
    d2_key.setOutlineThickness(outline_thickness);
    d2_key.setOutlineColor(outline_color); 
    d2_key.move(key_width*8, 0);

    sf::RectangleShape d2b_key(sf::Vector2f(key_width, key_height/2));
    d2b_key.setOutlineThickness(outline_thickness);
    d2b_key.setOutlineColor(outline_color); 
    d2b_key.move(key_width*8 + key_width/2, 0);

    sf::RectangleShape e2_key(sf::Vector2f(key_width, key_height));
    e2_key.setOutlineThickness(outline_thickness);
    e2_key.setOutlineColor(outline_color); 
    e2_key.move(key_width*9, 0);




    /*
    Loading sounds
    */

    std::string loc = "resources2/_3.ogg";

    sf::SoundBuffer c_buffer;
    sf::Sound c_note;
    c_note.setBuffer(c_buffer);

    sf::SoundBuffer cb_buffer;
    sf::Sound cb_note;
    cb_note.setBuffer(cb_buffer);

    sf::SoundBuffer d_buffer;
    sf::Sound d_note;
    d_note.setBuffer(d_buffer);

    sf::SoundBuffer db_buffer;
    sf::Sound db_note;
    db_note.setBuffer(db_buffer);

    sf::SoundBuffer e_buffer;
    sf::Sound e_note;
    e_note.setBuffer(e_buffer);

    sf::SoundBuffer f_buffer;
    sf::Sound f_note;
    f_note.setBuffer(f_buffer);

    sf::SoundBuffer fb_buffer;
    sf::Sound fb_note;
    fb_note.setBuffer(fb_buffer);

    sf::SoundBuffer g_buffer;
    sf::Sound g_note;
    g_note.setBuffer(g_buffer);

    sf::SoundBuffer gb_buffer;
    sf::Sound gb_note;
    gb_note.setBuffer(gb_buffer);

    sf::SoundBuffer a_buffer;
    sf::Sound a_note;
    a_note.setBuffer(a_buffer);

    sf::SoundBuffer ab_buffer;
    sf::Sound ab_note;
    ab_note.setBuffer(ab_buffer);

    sf::SoundBuffer b_buffer;
    sf::Sound b_note;
    b_note.setBuffer(b_buffer);

    sf::SoundBuffer c2_buffer;
    sf::Sound c2_note;
    c2_note.setBuffer(c2_buffer);

    sf::SoundBuffer c2b_buffer;
    sf::Sound c2b_note;
    c2b_note.setBuffer(c2b_buffer);

    sf::SoundBuffer d2_buffer;
    sf::Sound d2_note;
    d2_note.setBuffer(d2_buffer);

    sf::SoundBuffer d2b_buffer;
    sf::Sound d2b_note;
    d2b_note.setBuffer(d2b_buffer);

    sf::SoundBuffer e2_buffer;
    sf::Sound e2_note;
    e2_note.setBuffer(e2_buffer);






    bool c_being_pressed = false;
    bool cb_being_pressed = false;
    bool d_being_pressed = false;
    bool db_being_pressed = false;
    bool e_being_pressed = false;
    bool f_being_pressed = false;
    bool fb_being_pressed = false;
    bool g_being_pressed = false;
    bool gb_being_pressed = false;
    bool a_being_pressed = false;
    bool ab_being_pressed = false;
    bool b_being_pressed = false;
    bool c2_being_pressed = false;
    bool c2b_being_pressed = false;
    bool d2_being_pressed = false;
    bool d2b_being_pressed = false;
    bool e2_being_pressed = false;



    while (window.isOpen()){
        /*
        default key color states
        */
        c_key.setFillColor(sf::Color(255, 255, 255));
        cb_key.setFillColor(sf::Color(0, 0, 0));
        d_key.setFillColor(sf::Color(255, 255, 255));
        db_key.setFillColor(sf::Color(0, 0, 0));
        e_key.setFillColor(sf::Color(255, 255, 255));
        f_key.setFillColor(sf::Color(255, 255, 255));
        fb_key.setFillColor(sf::Color(0, 0, 0));
        g_key.setFillColor(sf::Color(255, 255, 255));
        gb_key.setFillColor(sf::Color(0, 0, 0));
        a_key.setFillColor(sf::Color(255, 255, 255));
        ab_key.setFillColor(sf::Color(0, 0, 0));
        b_key.setFillColor(sf::Color(255, 255, 255));
        c2_key.setFillColor(sf::Color(255, 255, 255));
        c2b_key.setFillColor(sf::Color(0, 0, 0));
        d2_key.setFillColor(sf::Color(255, 255, 255));
        d2b_key.setFillColor(sf::Color(0, 0, 0));
        e2_key.setFillColor(sf::Color(255, 255, 255));
        
        /*
        event checking and sound playing
        */
        sf::Event event;
        while (window.pollEvent(event)){
            switch (event.type){

                case sf::Event::Closed:
                    window.close();
                    break;
                
                case sf::Event::KeyPressed:

                    if (event.key.code == sf::Keyboard::A && !c_being_pressed){
                        loc[11] = 'c';
                        c_buffer.loadFromFile(loc);
                        c_note.play();
                    }

                    if (event.key.code == sf::Keyboard::W && !cb_being_pressed){
                        loc[11] = 'c';
                        cb_buffer.loadFromFile(loc);
                        cb_note.play();
                    }

                    if (event.key.code == sf::Keyboard::S && !d_being_pressed){
                        loc[11] = 'd';
                        d_buffer.loadFromFile(loc);
                        d_note.play();
                    }

                    if (event.key.code == sf::Keyboard::E && !db_being_pressed){
                        loc[11] = 'c';
                        db_buffer.loadFromFile(loc);
                        db_note.play();
                    }

                    if (event.key.code == sf::Keyboard::D && !e_being_pressed){
                        loc[11] = 'e';
                        e_buffer.loadFromFile(loc);
                        e_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::F && !f_being_pressed){
                        loc[11] = 'f';
                        f_buffer.loadFromFile(loc);
                        f_note.play();
                    }

                    if (event.key.code == sf::Keyboard::T && !fb_being_pressed){
                        loc[11] = 'c';
                        fb_buffer.loadFromFile(loc);
                        fb_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::G && !g_being_pressed){
                        loc[11] = 'g';
                        g_buffer.loadFromFile(loc);
                        g_note.play();   
                    }

                    if (event.key.code == sf::Keyboard::Y && !gb_being_pressed){
                        loc[11] = 'c';
                        gb_buffer.loadFromFile(loc);
                        gb_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::H && !a_being_pressed){
                        loc[11] = 'a';
                        a_buffer.loadFromFile(loc);
                        a_note.play();
                        
                    }

                    if (event.key.code == sf::Keyboard::U && !ab_being_pressed){
                        loc[11] = 'c';
                        ab_buffer.loadFromFile(loc);
                        ab_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::J && !b_being_pressed){
                        loc[11] = 'b';
                        b_buffer.loadFromFile(loc);
                        b_note.play();
                        
                    }
                    else if (event.key.code == sf::Keyboard::K && !c2_being_pressed){
                        loc[11] = 'c';
                        loc[12] = '4';
                        c2_buffer.loadFromFile(loc);
                        c2_note.play();
                    }

                    if (event.key.code == sf::Keyboard::O && !c2b_being_pressed){
                        loc[11] = 'c';
                        c2b_buffer.loadFromFile(loc);
                        c2b_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::L && !d2_being_pressed){
                        loc[11] = 'd';
                        loc[12] = '4';
                        d2_buffer.loadFromFile(loc);
                        d2_note.play();
                    }

                    if (event.key.code == sf::Keyboard::P && !d2b_being_pressed){
                        loc[11] = 'c';
                        d2b_buffer.loadFromFile(loc);
                        d2b_note.play();
                    }

                    else if (event.key.code == sf::Keyboard::Semicolon && !e2_being_pressed){
                        loc[11] = 'e';
                        loc[12] = '4';
                        e2_buffer.loadFromFile(loc);
                        e2_note.play();
                    }

                    break;


                default:
                    break;
            }


            
        }


        /*
        Light up piano and set bool to stop audio from playing multiple times
        */

       sf::Color pressed_color = sf::Color(0, 191, 255);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            c_key.setFillColor(pressed_color);
            c_being_pressed = true;
        }
        else{
            c_being_pressed = false;
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
            cb_key.setFillColor(pressed_color);
            cb_being_pressed = true;
        }
        else{
            cb_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            d_key.setFillColor(pressed_color);
            d_being_pressed = true;
        }
        else{
            d_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
            db_key.setFillColor(pressed_color);
            db_being_pressed = true;
        }
        else{
            db_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            e_key.setFillColor(pressed_color);
            e_being_pressed = true;
        }
        else{
            e_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)){
            f_key.setFillColor(pressed_color);
            f_being_pressed = true;
        }
        else{
            f_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T)){
            fb_key.setFillColor(pressed_color);
            fb_being_pressed = true;
        }
        else{
            fb_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::G)){
            g_key.setFillColor(pressed_color);
            g_being_pressed = true;
        }
        else{
            g_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)){
            gb_key.setFillColor(pressed_color);
            gb_being_pressed = true;
        }
        else{
            gb_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)){
            a_key.setFillColor(pressed_color);
            a_being_pressed = true;
        }
        else{
            a_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)){
            ab_key.setFillColor(pressed_color);
            ab_being_pressed = true;
        }
        else{
            ab_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
            b_key.setFillColor(pressed_color);
            b_being_pressed = true;
        }
        else{
            b_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)){
            c2_key.setFillColor(pressed_color);
            c2_being_pressed = true;
        }
        else{
            c2_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)){
            c2b_key.setFillColor(pressed_color);
            c2b_being_pressed = true;
        }
        else{
            c2b_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)){
            d2_key.setFillColor(pressed_color);
            d2_being_pressed = true;
        }
        else{
            d2_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)){
            d2b_key.setFillColor(pressed_color);
            d2b_being_pressed = true;
        }
        else{
            d2b_being_pressed = false;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Semicolon)){
            e2_key.setFillColor(pressed_color);
            e2_being_pressed = true;
        }
        else{
            e2_being_pressed = false;
        }



        /*
        drawing piano to screen
        */
        window.clear(sf::Color::Black);
        window.draw(c_key);
        window.draw(cb_key);
        window.draw(d_key);
        window.draw(db_key);
        window.draw(e_key);
        window.draw(f_key);
        window.draw(fb_key);
        window.draw(g_key);
        window.draw(gb_key);
        window.draw(a_key);
        window.draw(ab_key);
        window.draw(b_key);
        window.draw(c2_key);
        window.draw(c2b_key);
        window.draw(d2_key);
        window.draw(d2b_key);
        window.draw(e2_key);
        window.display();
    }
}






#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<iostream>
#include<fstream>
#include "Visual/v_main_menu.h"


int main(){
    RenderWindow window(sf::VideoMode(800, 600), "PUK");
    window.setFramerateLimit(60);

    v_main_menu menu;
    menu._menu(window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    }
}
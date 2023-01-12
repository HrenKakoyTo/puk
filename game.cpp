#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include "Header2.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "PUK");
    window.setFramerateLimit(60);
    sf::Texture bg;
    if (!bg.loadFromFile("texture/bg.png"))
        return -1;

    sf::Sprite s_bg;
    s_bg.setTexture(bg);

    sf::Texture hero;
    if (!hero.loadFromFile("texture/hero.png"))
        return -1;
    
    sf::Sprite s_hero;
    s_hero.setTexture(hero);
    s_hero.setPosition(400, 300);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


	player Player;
        point Point;
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            Player.move_left();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            Player.move_right();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            Player.move_up();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            Player.move_down();
        }

        window.clear();
        window.draw(s_bg);
        window.draw(s_hero);
        window.display();
    }
    
    return 0;
}

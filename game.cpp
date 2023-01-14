#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include "Header2.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "PUK");
    window.setFramerateLimit(60);
    sf::Texture bg;
    if (!bg.loadFromFile("/home/jus/puk/texture/bg.png"))
        return -1;

    sf::Sprite s_bg;
    s_bg.setTexture(bg);

    sf::Texture hero;
    if (!hero.loadFromFile("/home/jus/puk/texture/hero.png"))
        return -1;

    sf::Texture thing;
    if (!thing.loadFromFile("/home/jus/puk/texture/t_A.png"))
        return -1;

    sf::Sprite s_thing;
    s_thing.setTexture(thing);
    s_thing.setPosition(400, 300);


    sf::Sprite s_hero;
    s_hero.setTexture(hero);
    s_hero.setPosition(410, 300);

    player Player;
    point Point;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

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
        Point.try_pick_up(Player.getX(),Player.getY());
        s_hero.setPosition(Player.getX(),Player.getY());
        s_thing.setPosition(Point.getX(),Point.getY());


        window.clear();
        window.draw(s_bg);
        window.draw(s_hero);
        window.draw(s_thing);
        window.display();
    }

    return 0;
}

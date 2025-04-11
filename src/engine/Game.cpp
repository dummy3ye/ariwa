// src/engine/Game.cpp
#include <SFML/Graphics.hpp>
#include "Game.hpp"

void Game::Run() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pixel Game");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }
}
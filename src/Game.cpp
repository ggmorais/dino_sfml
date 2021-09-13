#include "../headers/Game.h"


Game::Game() {
    p_window = new sf::RenderWindow(sf::VideoMode(800, 480), "Dino");
    p_dino = new Dino();
    p_floor = new Floor();
    p_background = new Background();
}

Game::~Game() {

}

bool Game::isRunning() {
    return p_window->isOpen();
}

void Game::pollEvents() {
    while (p_window->pollEvent(m_event)) {
        if (m_event.type == sf::Event::Closed) {
            p_window->close();
        }

        if (m_event.type == sf::Event::KeyPressed) {
            if (m_event.key.code == sf::Keyboard::Key::Escape) {
                p_window->close();
            }
        }
    }    
}

void Game::render() {
    p_window->clear(sf::Color(32, 33, 36));
    
    p_background->render(*p_window);
    p_dino->render(*p_window);
    p_floor->render(*p_window);

    p_window->display();
}

void Game::update() {
    pollEvents();

    p_dino->update(*p_window);
    p_floor->update(*p_window);
}


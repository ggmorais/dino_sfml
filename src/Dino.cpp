#include "../headers/Dino.h"

Dino::Dino() {
    if (!m_texture.loadFromFile("assets/dino_sprite.png")) {
        std::cerr << "Error loading dino's texture!" << std::endl;
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(sf::IntRect(848, 2, 44, 50));
}

Dino::~Dino() {}

void Dino::update(sf::RenderTarget& target) {
    if (m_sprite.getPosition().x == 0) {
        m_sprite.setPosition(
            target.getSize().x / 2 - m_sprite.getGlobalBounds().width / 2,
            target.getSize().y / 2 - m_sprite.getGlobalBounds().height / 2
        );
    }
}

void Dino::render(sf::RenderTarget& target) {
    target.draw(m_sprite);
}


#include "../headers/Floor.h"

Floor::Floor() {
    if (!m_texture.loadFromFile("assets/dino_sprite.png")) {
        std::cerr << "Error loading floor's texture!" << std::endl;
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(sf::IntRect(2, 52, 1200, 16));
    // m_sprite.setScale(2, 2);
}

Floor::~Floor() {

}

void Floor::update(sf::RenderTarget& target) {
    if (m_sprite.getPosition().y == 0) {
        m_sprite.setPosition(
            0.f,
            target.getSize().y - m_sprite.getGlobalBounds().height
        );
    }
}

void Floor::render(sf::RenderTarget& target) {
    target.draw(m_sprite);
}

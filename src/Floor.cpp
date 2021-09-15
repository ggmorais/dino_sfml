#include "../headers/Floor.h"

Floor::Floor() {
    if (!m_texture.loadFromFile("assets/dino_sprite.png")) {
        std::cerr << "Error loading floor's texture!" << std::endl;
    }

    for (int i = 0; i <= 1; i++) {
        sf::Sprite sprite;
        sprite.setTexture(m_texture);
        sprite.setTextureRect(sf::IntRect(2, 52, 1200, 16));
        sprite.setScale(2, 2);
        m_sprites.push_back(sprite);
    }
}

Floor::~Floor() {

}

void Floor::update(sf::RenderTarget& target, float speed) {
    for (int i = 0; i <= 1; i++) {
        if (m_sprites[i].getPosition().y == 0) {
            m_sprites[i].setPosition(
                m_sprites[i].getGlobalBounds().width * i,
                target.getSize().y - m_sprites[i].getGlobalBounds().height
            );
        }

        if (m_sprites[i].getPosition().x <= -m_sprites[i].getGlobalBounds().width) {
            m_sprites[i].setPosition(m_sprites[i].getGlobalBounds().width, m_sprites[i].getPosition().y);
        }

        m_sprites[i].move(-speed, 0.f);
    }
}

void Floor::render(sf::RenderTarget& target) {
    for (auto sprite : m_sprites) {
        target.draw(sprite);
    }
}

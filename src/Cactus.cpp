#include "../headers/Cactus.h"

Cactus::Cactus() {
    if (!m_texture.loadFromFile("assets/dino_sprite.png")) {
        std::cerr << "Error loading cactus texture." << std::endl;
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(sf::IntRect(228, 2, 17, 35));
}

Cactus::~Cactus() {

}

void Cactus::update(sf::RenderTarget& target, float speed) {
 
}

void Cactus::render(sf::RenderTarget& target) {
    target.draw(m_sprite);
}


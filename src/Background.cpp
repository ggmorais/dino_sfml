#include "../headers/Background.h"

Background::Background() {
   /*  if (m_texture.loadFromFile("assets/dino_sprite.png")) { */
        /* std::cerr << "Error loading background's texture!" << std::endl; */
    /* } */

    // m_sprite.setTexture(m_texture);
    // m_sprite.setTextureRect(sf::IntRect(0, ))
    m_sprite.setTextureRect(sf::IntRect(0, 0, 800, 480));
    m_sprite.setColor(sf::Color(32, 33, 36));
}

Background::~Background() {

}

void Background::update() {
    
}

void Background::render(sf::RenderTarget& target) {
    target.draw(m_sprite);
}

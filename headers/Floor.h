#pragma once
#include "pch.h"

class Floor {
    sf::Texture m_texture;
    std::vector<sf::Sprite> m_sprites;
    
    float m_speed = 2.f;

    public:
        Floor();
        ~Floor();

        void update(sf::RenderTarget& target);
        void render(sf::RenderTarget& target);
};

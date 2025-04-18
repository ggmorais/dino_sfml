#pragma once
#include "pch.h"

class Floor {
    sf::Texture m_texture;
    std::vector<sf::Sprite> m_sprites;

    public:
        Floor();
        ~Floor();

        void update(sf::RenderTarget& target, float speed);
        void render(sf::RenderTarget& target);
};

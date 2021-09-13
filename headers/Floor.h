#pragma once
#include "pch.h"

class Floor {
    sf::Texture m_texture;
    sf::Sprite m_sprite;

    public:
        Floor();
        ~Floor();

        void update(sf::RenderTarget& target);
        void render(sf::RenderTarget& target);
};

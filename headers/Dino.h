#pragma once
#include "pch.h"

class Dino {
    sf::Texture m_texture;
    sf::Sprite m_sprite;

    public:
        Dino();
        ~Dino();

        void render(sf::RenderTarget& target);
        void update(sf::RenderTarget& target);
};

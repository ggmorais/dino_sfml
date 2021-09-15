#pragma once
#include "pch.h"

class Cactus {
    sf::Texture m_texture;
    sf::Sprite m_sprite;

    public:
        Cactus();
        ~Cactus();

        void update(sf::RenderTarget& target, float speed);
        void render(sf::RenderTarget& target);
};


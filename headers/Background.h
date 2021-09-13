#pragma once
#include "pch.h"

class Background {
    sf::Texture m_texture;
    sf::Sprite m_sprite;

    public:
        Background();
        ~Background();

        void update();
        void render(sf::RenderTarget& target);
};

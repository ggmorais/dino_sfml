#include "pch.h"
#include "Dino.h"
#include "Floor.h"
#include "Background.h"

class Game {
    sf::RenderWindow* p_window;
    sf::Event m_event;
    
    Dino* p_dino;
    Floor* p_floor;
    Background* p_background;
    
    float m_speed = 2.f;

    public:
        Game();
        ~Game();
        
        bool isRunning();
        void pollEvents();
        void render();
        void update();
};


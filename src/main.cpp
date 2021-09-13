#include "../headers/Game.h"


int main()
{
    Game* game = new Game();
    
    while (game->isRunning()) {
        game->update();
        game->render();
    }

    return 0;
}


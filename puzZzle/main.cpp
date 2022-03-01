#define WINDOW_WIDTH 700
#include "Game.h"
using namespace std;

Game *game = nullptr;

int main(int argc, char* args[])
{
    game = new Game();

    game->init("vdmkEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_WIDTH, false);

    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
    return 0;
}

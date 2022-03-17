#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <vector>
#include <string>
#include "Piece.h"

class Game {

public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() {return isRunning;}

private:
    int cnt = 0;
    int mousex = 0;
    int mousey = 0;
    bool isRunning;
    std::string action = "menu";
    SDL_Window *window;
    SDL_Renderer *renderer;
    std::vector <Piece*> texturesData;
    std::vector <Piece*> grid3 = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
    //SDL_Texture* texture;
};

#endif // GAME_H_INCLUDED

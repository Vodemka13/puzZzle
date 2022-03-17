#include "Game.h"
#include "windows.h"
#include "ShellAPI.h"
#include "Piece.h"

SDL_Texture* background;
SDL_Texture* p1;
SDL_Texture* p2;
SDL_Texture* p3;
SDL_Texture* p4;
SDL_Texture* p5;
SDL_Texture* p6;
SDL_Texture* p7;
SDL_Texture* p8;
SDL_Texture* p9;

bool clicked = false;
bool grabbed = false;
int grabbedInd;
Game::Game()
{}
Game::~Game()
{}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen){
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout << "Subsystems initialised!..." << std::endl;
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        Piece *piece1 = nullptr;
        Piece *piece2 = nullptr;
        Piece *piece3 = nullptr;
        Piece *piece4 = nullptr;
        Piece *piece5 = nullptr;
        Piece *piece6 = nullptr;
        Piece *piece7 = nullptr;
        Piece *piece8 = nullptr;
        Piece *piece9 = nullptr;

        piece1 = new Piece();
        piece2 = new Piece();
        piece3 = new Piece();
        piece4 = new Piece();
        piece5 = new Piece();
        piece6 = new Piece();
        piece7 = new Piece();
        piece8 = new Piece();
        piece9 = new Piece();

        piece1->init(renderer, "cropped/c1.png", 304, 0);
        piece2->init(renderer, "cropped/c2.png", 304, 1);
        piece3->init(renderer, "cropped/c3.png", 304, 2);
        piece4->init(renderer, "cropped/c4.png", 304, 3);
        piece5->init(renderer, "cropped/c5.png", 304, 4);
        piece6->init(renderer, "cropped/c6.png", 304, 5);
        piece7->init(renderer, "cropped/c7.png", 304, 6);
        piece8->init(renderer, "cropped/c8.png", 304, 7);
        piece9->init(renderer, "cropped/c9.png", 304, 8);

        piece1->update(rand() % 1000, rand() % 1000);
        piece2->update(rand() % 1000, rand() % 1000);
        piece3->update(rand() % 1000, rand() % 1000);
        piece4->update(rand() % 1000, rand() % 1000);
        piece5->update(rand() % 1000, rand() % 1000);
        piece6->update(rand() % 1000, rand() % 1000);
        piece7->update(rand() % 1000, rand() % 1000);
        piece8->update(rand() % 1000, rand() % 1000);
        piece9->update(rand() % 1000, rand() % 1000);

        texturesData.clear();
        texturesData.push_back(piece1);
        texturesData.push_back(piece2);
        texturesData.push_back(piece3);
        texturesData.push_back(piece4);
        texturesData.push_back(piece5);
        texturesData.push_back(piece6);
        texturesData.push_back(piece7);
        texturesData.push_back(piece8);
        texturesData.push_back(piece9);
        if (window){
            std::cout << "Window created!" << std::endl;
        }
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "Renderer created!" << std::endl;
        }
        isRunning = true;
    } else {
        isRunning = false;
    }
    if (action == "menu"){
        SDL_Surface* tmpSurf = IMG_Load("assets/background.png");
        background = SDL_CreateTextureFromSurface(renderer, tmpSurf);
    }
    if (action == "3"){
        SDL_Surface* tmpSurf = IMG_Load("assets/background3.png");
        background = SDL_CreateTextureFromSurface(renderer, tmpSurf);

        tmpSurf = IMG_Load("cropped/c1.png");
        p1 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c2.png");
        p2 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c3.png");
        p3 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c4.png");
        p4 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c5.png");
        p5 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c6.png");
        p6 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c7.png");
        p7 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c8.png");
        p8 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c9.png");
        p9 = SDL_CreateTextureFromSurface(renderer, tmpSurf);

        SDL_FreeSurface(tmpSurf);
    }


}
void Game::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
        isRunning = false;
        break;
    case SDL_MOUSEBUTTONDOWN:
        clicked = true;
        break;
    case SDL_MOUSEBUTTONUP:
        clicked = false;
        grabbed = false;
        if (action == "3"){
            for (int i = 0; i < grid3.size(); i++){
                if (grid3[i] == texturesData[grabbedInd]){
                    grid3[i] = NULL;
                    break;
                }
            }
            if (mousex >= 508 && mousex <= 811 && mousey >= 84 && mousey <= 387) {
                if (grid3[0] == NULL){
                    grid3[0] = texturesData[grabbedInd];
                    grid3[0]->update(508, 84);
                }
            }
            if (mousex >= 811 && mousex <= 1114 && mousey >= 84 && mousey <= 387) {
                if (grid3[1] == NULL){
                    grid3[1] = texturesData[grabbedInd];
                    grid3[1]->update(811, 84);
                }
            }
            if (mousex >= 1114 && mousex <= 1417 && mousey >= 84 && mousey <= 387) {
                if (grid3[2] == NULL){
                    grid3[2] = texturesData[grabbedInd];
                    grid3[2]->update(1114, 84);
                }
            }
            if (mousex >= 508 && mousex <= 811 && mousey >= 387 && mousey <= 689) {
                if (grid3[3] == NULL){
                    grid3[3] = texturesData[grabbedInd];
                    grid3[3]->update(508, 387);
                }
            }
            if (mousex >= 811 && mousex <= 1114 && mousey >= 387 && mousey <= 689) {
                if (grid3[4] == NULL){
                    grid3[4] = texturesData[grabbedInd];
                    grid3[4]->update(811, 387);
                }
            }
            if (mousex >= 1114 && mousex <= 1417 && mousey >= 387 && mousey <= 689) {
                if (grid3[5] == NULL){
                    grid3[5] = texturesData[grabbedInd];
                    grid3[5]->update(1114, 387);
                }
            }
            if (mousex >= 508 && mousex <= 811 && mousey >= 689 && mousey <= 992) {
                if (grid3[6] == NULL){
                    grid3[6] = texturesData[grabbedInd];
                    grid3[6]->update(508, 689);
                }
            }
            if (mousex >= 811 && mousex <= 1114 && mousey >= 689 && mousey <= 992) {
                if (grid3[7] == NULL){
                    grid3[7] = texturesData[grabbedInd];
                    grid3[7]->update(811, 689);
                }
            }
            if (mousex >= 1114 && mousex <= 1417 && mousey >= 689 && mousey <= 992) {
                if (grid3[8] == NULL){
                    grid3[8] = texturesData[grabbedInd];
                    grid3[8]->update(1114, 689);
                }
            }
        }

        break;
    default:
        break;
    }
}
void Game::update(){
    cnt++;
    //std::cout << mousex << " " << mousey << std::endl;

    if (clicked && action == "menu"){
        if (mousex >= 787 && mousex <= 1112 && mousey >= 519 && mousey <= 682){
            action = "3";
            SDL_DestroyWindow(window);
            SDL_Delay(500);
            this->init("3x3", 0, 0, 1920, 1080, false);
        }
    }
    if (clicked && !grabbed){
        Uint8 buttons = SDL_GetMouseState(&mousex, &mousey);
        for (int i = texturesData.size() - 1; i > -1; i--){
            if (mousex > texturesData[i]->returnX() && mousex < texturesData[i]->returnX() + texturesData[i]->returnScale() && mousey > texturesData[i]->returnY() && mousey < texturesData[i]->returnY() + texturesData[i]->returnScale()){
                grabbed = true;
                grabbedInd = i;
                //std::cout << grabbedInd << std::endl;
                break;
            }
        }
    }
    if (grabbed && action == "3"){
        int prevmousex = mousex;
        int prevmousey = mousey;
        Uint8 buttons = SDL_GetMouseState(&mousex, &mousey);
        texturesData[grabbedInd]->update(texturesData[grabbedInd]->returnX() + mousex - prevmousex, texturesData[grabbedInd]->returnY() + mousey - prevmousey);
    }
}
void Game::render(){
    SDL_RenderClear(renderer);
    // add render stuff later
    SDL_RenderCopy(renderer, background, nullptr, nullptr);

    SDL_Rect dstrect = {texturesData[0]->returnX(), texturesData[0]->returnY(), texturesData[0]->returnScale(), texturesData[0]->returnScale()};
    SDL_RenderCopy(renderer, p1, nullptr, &dstrect);
    dstrect = {texturesData[1]->returnX(), texturesData[1]->returnY(), texturesData[1]->returnScale(), texturesData[1]->returnScale()};
    SDL_RenderCopy(renderer, p2, nullptr, &dstrect);
    dstrect = {texturesData[2]->returnX(), texturesData[2]->returnY(), texturesData[2]->returnScale(), texturesData[2]->returnScale()};
    SDL_RenderCopy(renderer, p3, nullptr, &dstrect);
    dstrect = {texturesData[3]->returnX(), texturesData[3]->returnY(), texturesData[3]->returnScale(), texturesData[3]->returnScale()};
    SDL_RenderCopy(renderer, p4, nullptr, &dstrect);
    dstrect = {texturesData[4]->returnX(), texturesData[4]->returnY(), texturesData[4]->returnScale(), texturesData[4]->returnScale()};
    SDL_RenderCopy(renderer, p5, nullptr, &dstrect);
    dstrect = {texturesData[5]->returnX(), texturesData[5]->returnY(), texturesData[5]->returnScale(), texturesData[5]->returnScale()};
    SDL_RenderCopy(renderer, p6, nullptr, &dstrect);
    dstrect = {texturesData[6]->returnX(), texturesData[6]->returnY(), texturesData[6]->returnScale(), texturesData[6]->returnScale()};
    SDL_RenderCopy(renderer, p7, nullptr, &dstrect);
    dstrect = {texturesData[7]->returnX(), texturesData[7]->returnY(), texturesData[7]->returnScale(), texturesData[7]->returnScale()};
    SDL_RenderCopy(renderer, p8, nullptr, &dstrect);
    dstrect = {texturesData[8]->returnX(), texturesData[8]->returnY(), texturesData[8]->returnScale(), texturesData[8]->returnScale()};
    SDL_RenderCopy(renderer, p9, nullptr, &dstrect);

    SDL_RenderPresent(renderer);
}
void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

#include "Game.h"
#include "windows.h"
#include "Piece.h"
#include "Image.h"

void crop(int num){
    Image image("images/image.jpg");
    if (image.w > image.h) image.crop((image.w - image.h) / 2, 0, image.w - (image.w - image.h), image.h);
    if (image.w < image.h) image.crop(0, (image.h - image.w) / 2, image.w, image.h - (image.h - image.w));
    int step = image.w / num;
    Image c1 = image;
    Image c2 = image;
    Image c3 = image;
    Image c4 = image;
    Image c5 = image;
    Image c6 = image;
    Image c7 = image;
    Image c8 = image;
    Image c9 = image;
    Image c10 = image;
    Image c11 = image;
    Image c12 = image;
    Image c13 = image;
    Image c14 = image;
    Image c15 = image;
    Image c16 = image;
    Image c17 = image;
    Image c18 = image;
    Image c19 = image;
    Image c20 = image;
    Image c21 = image;
    Image c22 = image;
    Image c23 = image;
    Image c24 = image;
    Image c25 = image;
    if (num == 3){
        std::cout << "3";
        c1.crop(0, 0, step, step);
        c2.crop(step, 0, step, step);
        c3.crop(step * 2, 0, step, step);
        c4.crop(0, step, step, step);
        c5.crop(step, step, step, step);
        c6.crop(step * 2, step, step, step);
        c7.crop(0, step * 2, step, step);
        c8.crop(step, step * 2, step, step);
        c9.crop(step * 2, step * 2, step, step);
    }
    if (num == 5){
        std::cout << "5";
        c1.crop(0, 0, step, step);
        c2.crop(step, 0, step, step);
        c3.crop(step * 2, 0, step, step);
        c4.crop(step * 3, 0, step, step);
        c5.crop(step * 4, 0, step, step);
        c6.crop(0, step, step, step);
        c7.crop(step, step, step, step);
        c8.crop(step * 2, step, step, step);
        c9.crop(step * 3, step, step, step);
        c10.crop(step * 4, step, step, step);
        c11.crop(0, step * 2, step, step);
        c12.crop(step, step * 2, step, step);
        c13.crop(step * 2, step * 2, step, step);
        c14.crop(step * 3, step * 2, step, step);
        c15.crop(step * 4, step * 2, step, step);
        c16.crop(0, step * 3, step, step);
        c17.crop(step, step * 3, step, step);
        c18.crop(step * 2, step * 3, step, step);
        c19.crop(step * 3, step * 3, step, step);
        c20.crop(step * 4, step * 3, step, step);
        c21.crop(0, step * 4, step, step);
        c22.crop(step, step * 4, step, step);
        c23.crop(step * 2, step * 4, step, step);
        c24.crop(step * 3, step * 4, step, step);
        c25.crop(step * 4, step * 4, step, step);
    }

    c1.write("cropped/c1.png");
    c2.write("cropped/c2.png");
    c3.write("cropped/c3.png");
    c4.write("cropped/c4.png");
    c5.write("cropped/c5.png");
    c6.write("cropped/c6.png");
    c7.write("cropped/c7.png");
    c8.write("cropped/c8.png");
    c9.write("cropped/c9.png");
    if (num == 5){
        c10.write("cropped/c10.png");
        c11.write("cropped/c11.png");
        c12.write("cropped/c12.png");
        c13.write("cropped/c13.png");
        c14.write("cropped/c14.png");
        c15.write("cropped/c15.png");
        c16.write("cropped/c16.png");
        c17.write("cropped/c17.png");
        c18.write("cropped/c18.png");
        c19.write("cropped/c19.png");
        c20.write("cropped/c20.png");
        c21.write("cropped/c21.png");
        c22.write("cropped/c22.png");
        c23.write("cropped/c23.png");
        c24.write("cropped/c24.png");
        c25.write("cropped/c25.png");
    }

}

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
SDL_Texture* p10;
SDL_Texture* p11;
SDL_Texture* p12;
SDL_Texture* p13;
SDL_Texture* p14;
SDL_Texture* p15;
SDL_Texture* p16;
SDL_Texture* p17;
SDL_Texture* p18;
SDL_Texture* p19;
SDL_Texture* p20;
SDL_Texture* p21;
SDL_Texture* p22;
SDL_Texture* p23;
SDL_Texture* p24;
SDL_Texture* p25;

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
        Piece *piece10 = nullptr;
        Piece *piece11 = nullptr;
        Piece *piece12 = nullptr;
        Piece *piece13 = nullptr;
        Piece *piece14 = nullptr;
        Piece *piece15 = nullptr;
        Piece *piece16 = nullptr;
        Piece *piece17 = nullptr;
        Piece *piece18 = nullptr;
        Piece *piece19 = nullptr;
        Piece *piece20 = nullptr;
        Piece *piece21 = nullptr;
        Piece *piece22 = nullptr;
        Piece *piece23 = nullptr;
        Piece *piece24 = nullptr;
        Piece *piece25 = nullptr;

        piece1 = new Piece();
        piece2 = new Piece();
        piece3 = new Piece();
        piece4 = new Piece();
        piece5 = new Piece();
        piece6 = new Piece();
        piece7 = new Piece();
        piece8 = new Piece();
        piece9 = new Piece();
        piece10 = new Piece();
        piece11 = new Piece();
        piece12 = new Piece();
        piece13 = new Piece();
        piece14 = new Piece();
        piece15 = new Piece();
        piece16 = new Piece();
        piece17 = new Piece();
        piece18 = new Piece();
        piece19 = new Piece();
        piece20 = new Piece();
        piece21 = new Piece();
        piece22 = new Piece();
        piece23 = new Piece();
        piece24 = new Piece();
        piece25 = new Piece();

        if (action == "3"){
            piece1->init(renderer, "cropped/c1.png", 304, 0);
            piece2->init(renderer, "cropped/c2.png", 304, 1);
            piece3->init(renderer, "cropped/c3.png", 304, 2);
            piece4->init(renderer, "cropped/c4.png", 304, 3);
            piece5->init(renderer, "cropped/c5.png", 304, 4);
            piece6->init(renderer, "cropped/c6.png", 304, 5);
            piece7->init(renderer, "cropped/c7.png", 304, 6);
            piece8->init(renderer, "cropped/c8.png", 304, 7);
            piece9->init(renderer, "cropped/c9.png", 304, 8);
        }

        if (action == "5"){
            piece1->init(renderer, "cropped/c1.png", 182, 0);
            piece2->init(renderer, "cropped/c2.png", 182, 1);
            piece3->init(renderer, "cropped/c3.png", 182, 2);
            piece4->init(renderer, "cropped/c4.png", 182, 3);
            piece5->init(renderer, "cropped/c5.png", 182, 4);
            piece6->init(renderer, "cropped/c6.png", 182, 5);
            piece7->init(renderer, "cropped/c7.png", 182, 6);
            piece8->init(renderer, "cropped/c8.png", 182, 7);
            piece9->init(renderer, "cropped/c9.png", 182, 8);
            piece10->init(renderer, "cropped/c10.png", 182, 0);
            piece11->init(renderer, "cropped/c11.png", 182, 1);
            piece12->init(renderer, "cropped/c12.png", 182, 2);
            piece13->init(renderer, "cropped/c13.png", 182, 3);
            piece14->init(renderer, "cropped/c14.png", 182, 4);
            piece15->init(renderer, "cropped/c15.png", 182, 5);
            piece16->init(renderer, "cropped/c16.png", 182, 6);
            piece17->init(renderer, "cropped/c17.png", 182, 7);
            piece18->init(renderer, "cropped/c18.png", 182, 8);
            piece19->init(renderer, "cropped/c19.png", 182, 0);
            piece20->init(renderer, "cropped/c20.png", 182, 1);
            piece21->init(renderer, "cropped/c21.png", 182, 2);
            piece22->init(renderer, "cropped/c22.png", 182, 3);
            piece23->init(renderer, "cropped/c23.png", 182, 4);
            piece24->init(renderer, "cropped/c24.png", 182, 5);
            piece25->init(renderer, "cropped/c25.png", 182, 6);
        }
        if (action == "3"){
            piece1->update(rand() % 1000, rand() % 1000);
            piece2->update(rand() % 1000, rand() % 1000);
            piece3->update(rand() % 1000, rand() % 1000);
            piece4->update(rand() % 1000, rand() % 1000);
            piece5->update(rand() % 1000, rand() % 1000);
            piece6->update(rand() % 1000, rand() % 1000);
            piece7->update(rand() % 1000, rand() % 1000);
            piece8->update(rand() % 1000, rand() % 1000);
            piece9->update(rand() % 1000, rand() % 1000);
        }
        if (action == "5"){
            piece1->update(rand() % 1000, rand() % 1000);
            piece2->update(rand() % 1000, rand() % 1000);
            piece3->update(rand() % 1000, rand() % 1000);
            piece4->update(rand() % 1000, rand() % 1000);
            piece5->update(rand() % 1000, rand() % 1000);
            piece6->update(rand() % 1000, rand() % 1000);
            piece7->update(rand() % 1000, rand() % 1000);
            piece8->update(rand() % 1000, rand() % 1000);
            piece9->update(rand() % 1000, rand() % 1000);
            piece10->update(rand() % 1000, rand() % 1000);
            piece11->update(rand() % 1000, rand() % 1000);
            piece12->update(rand() % 1000, rand() % 1000);
            piece13->update(rand() % 1000, rand() % 1000);
            piece14->update(rand() % 1000, rand() % 1000);
            piece15->update(rand() % 1000, rand() % 1000);
            piece16->update(rand() % 1000, rand() % 1000);
            piece17->update(rand() % 1000, rand() % 1000);
            piece18->update(rand() % 1000, rand() % 1000);
            piece19->update(rand() % 1000, rand() % 1000);
            piece20->update(rand() % 1000, rand() % 1000);
            piece21->update(rand() % 1000, rand() % 1000);
            piece22->update(rand() % 1000, rand() % 1000);
            piece23->update(rand() % 1000, rand() % 1000);
            piece24->update(rand() % 1000, rand() % 1000);
            piece25->update(rand() % 1000, rand() % 1000);
        }


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
        if (action == "5"){
            texturesData.push_back(piece10);
            texturesData.push_back(piece11);
            texturesData.push_back(piece12);
            texturesData.push_back(piece13);
            texturesData.push_back(piece14);
            texturesData.push_back(piece15);
            texturesData.push_back(piece16);
            texturesData.push_back(piece17);
            texturesData.push_back(piece18);
            texturesData.push_back(piece19);
            texturesData.push_back(piece20);
            texturesData.push_back(piece21);
            texturesData.push_back(piece22);
            texturesData.push_back(piece23);
            texturesData.push_back(piece24);
            texturesData.push_back(piece25);
        }
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
        crop(3);
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
    if (action == "5"){
        crop(5);
        SDL_Surface* tmpSurf = IMG_Load("assets/background5.png");
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
        tmpSurf = IMG_Load("cropped/c10.png");
        p10 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c11.png");
        p11 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c12.png");
        p12 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c13.png");
        p13 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c14.png");
        p14 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c15.png");
        p15 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c16.png");
        p16 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c17.png");
        p17 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c18.png");
        p18 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c19.png");
        p19 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c20.png");
        p20 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c21.png");
        p21 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c22.png");
        p22 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c23.png");
        p23 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c24.png");
        p24 = SDL_CreateTextureFromSurface(renderer, tmpSurf);
        tmpSurf = IMG_Load("cropped/c25.png");
        p25 = SDL_CreateTextureFromSurface(renderer, tmpSurf);

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
        if (action == "5"){
            for (int i = 0; i < grid5.size(); i++){
                if (grid5[i] == texturesData[grabbedInd]){
                    grid5[i] = NULL;
                    break;
                }
            }
            if (mousex >= 508 && mousex <= 690 && mousey >= 84 && mousey <= 266) {
                if (grid5[0] == NULL){
                    grid5[0] = texturesData[grabbedInd];
                    grid5[0]->update(508, 84);
                }
            }
            if (mousex >= 690 && mousex <= 872 && mousey >= 84 && mousey <= 266) {
                if (grid5[1] == NULL){
                    grid5[1] = texturesData[grabbedInd];
                    grid5[1]->update(690, 84);
                }
            }
            if (mousex >= 872 && mousex <= 1054 && mousey >= 84 && mousey <= 266) {
                if (grid5[2] == NULL){
                    grid5[2] = texturesData[grabbedInd];
                    grid5[2]->update(872, 84);
                }
            }
            if (mousex >= 1054 && mousex <= 1236 && mousey >= 84 && mousey <= 266) {
                if (grid5[3] == NULL){
                    grid5[3] = texturesData[grabbedInd];
                    grid5[3]->update(1054, 84);
                }
            }
            if (mousex >= 1236 && mousex <= 1418 && mousey >= 84 && mousey <= 266) {
                if (grid5[4] == NULL){
                    grid5[4] = texturesData[grabbedInd];
                    grid5[4]->update(1236, 84);
                }
            }
            if (mousex >= 508 && mousex <= 690 && mousey >= 266 && mousey <= 448) {
                if (grid5[5] == NULL){
                    grid5[5] = texturesData[grabbedInd];
                    grid5[5]->update(508, 266);
                }
            }
            if (mousex >= 690 && mousex <= 872 && mousey >= 266 && mousey <= 448) {
                if (grid5[6] == NULL){
                    grid5[6] = texturesData[grabbedInd];
                    grid5[6]->update(690, 266);
                }
            }
            if (mousex >= 872 && mousex <= 1054 && mousey >= 266 && mousey <= 448) {
                if (grid5[7] == NULL){
                    grid5[7] = texturesData[grabbedInd];
                    grid5[7]->update(872, 266);
                }
            }
            if (mousex >= 1054 && mousex <= 1236 && mousey >= 266 && mousey <= 448) {
                if (grid5[8] == NULL){
                    grid5[8] = texturesData[grabbedInd];
                    grid5[8]->update(1054, 266);
                }
            }
            if (mousex >= 1236 && mousex <= 1418 && mousey >= 266 && mousey <= 448) {
                if (grid5[9] == NULL){
                    grid5[9] = texturesData[grabbedInd];
                    grid5[9]->update(1236, 266);
                }
            }
            if (mousex >= 508 && mousex <= 690 && mousey >= 448 && mousey <= 630) {
                if (grid5[10] == NULL){
                    grid5[10] = texturesData[grabbedInd];
                    grid5[10]->update(508, 448);
                }
            }
            if (mousex >= 690 && mousex <= 872 && mousey >= 448 && mousey <= 630) {
                if (grid5[11] == NULL){
                    grid5[11] = texturesData[grabbedInd];
                    grid5[11]->update(690, 448);
                }
            }
            if (mousex >= 872 && mousex <= 1054 && mousey >= 448 && mousey <= 630) {
                if (grid5[12] == NULL){
                    grid5[12] = texturesData[grabbedInd];
                    grid5[12]->update(872, 448);
                }
            }
            if (mousex >= 1054 && mousex <= 1236 && mousey >= 448 && mousey <= 630) {
                if (grid5[13] == NULL){
                    grid5[13] = texturesData[grabbedInd];
                    grid5[13]->update(1054, 448);
                }
            }
            if (mousex >= 1236 && mousex <= 1418 && mousey >= 448 && mousey <= 630) {
                if (grid5[14] == NULL){
                    grid5[14] = texturesData[grabbedInd];
                    grid5[14]->update(1236, 448);
                }
            }
            if (mousex >= 508 && mousex <= 690 && mousey >= 630 && mousey <= 812) {
                if (grid5[15] == NULL){
                    grid5[15] = texturesData[grabbedInd];
                    grid5[15]->update(508, 630);
                }
            }
            if (mousex >= 690 && mousex <= 872 && mousey >= 630 && mousey <= 812) {
                if (grid5[16] == NULL){
                    grid5[16] = texturesData[grabbedInd];
                    grid5[16]->update(690, 630);
                }
            }
            if (mousex >= 872 && mousex <= 1054 && mousey >= 630 && mousey <= 812) {
                if (grid5[17] == NULL){
                    grid5[17] = texturesData[grabbedInd];
                    grid5[17]->update(872, 630);
                }
            }
            if (mousex >= 1054 && mousex <= 1236 && mousey >= 630 && mousey <= 812) {
                if (grid5[18] == NULL){
                    grid5[18] = texturesData[grabbedInd];
                    grid5[18]->update(1054, 630);
                }
            }
            if (mousex >= 1236 && mousex <= 1418 && mousey >= 630 && mousey <= 812) {
                if (grid5[19] == NULL){
                    grid5[19] = texturesData[grabbedInd];
                    grid5[19]->update(1236, 630);
                }
            }
            if (mousex >= 508 && mousex <= 690 && mousey >= 812 && mousey <= 994) {
                if (grid5[20] == NULL){
                    grid5[20] = texturesData[grabbedInd];
                    grid5[20]->update(508, 812);
                }
            }
            if (mousex >= 690 && mousex <= 872 && mousey >= 812 && mousey <= 994) {
                if (grid5[21] == NULL){
                    grid5[21] = texturesData[grabbedInd];
                    grid5[21]->update(690, 812);
                }
            }
            if (mousex >= 872 && mousex <= 1054 && mousey >= 812 && mousey <= 994) {
                if (grid5[22] == NULL){
                    grid5[22] = texturesData[grabbedInd];
                    grid5[22]->update(872, 812);
                }
            }
            if (mousex >= 1054 && mousex <= 1236 && mousey >= 812 && mousey <= 994) {
                if (grid5[23] == NULL){
                    grid5[23] = texturesData[grabbedInd];
                    grid5[23]->update(1054, 812);
                }
            }
            if (mousex >= 1236 && mousex <= 1418 && mousey >= 812 && mousey <= 994) {
                if (grid5[24] == NULL){
                    grid5[24] = texturesData[grabbedInd];
                    grid5[24]->update(1236, 812);
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
    if (action == "3" && clicked){
        if (grid3 == texturesData){isRunning = false;}
    }
    if (action == "5" && clicked){
        if (grid5 == texturesData){isRunning = false;}
    }

    if (clicked && action == "menu"){
        if (mousex >= 787 && mousex <= 1112 && mousey >= 519 && mousey <= 682){
            action = "3";
            SDL_DestroyWindow(window);
            this->init("3x3", 0, 0, 1920, 1080, false);
        }
        if (mousex >= 787 && mousex <= 1112 && mousey >= 760 && mousey <= 921){
            action = "5";
            SDL_DestroyWindow(window);
            this->init("5x5", 0, 0, 1920, 1080, false);
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
    if (grabbed){
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
    if (action == "5"){
        SDL_Rect dstrect = {texturesData[9]->returnX(), texturesData[9]->returnY(), texturesData[9]->returnScale(), texturesData[9]->returnScale()};
        SDL_RenderCopy(renderer, p10, nullptr, &dstrect);
        dstrect = {texturesData[10]->returnX(), texturesData[10]->returnY(), texturesData[10]->returnScale(), texturesData[10]->returnScale()};
        SDL_RenderCopy(renderer, p11, nullptr, &dstrect);
        dstrect = {texturesData[11]->returnX(), texturesData[11]->returnY(), texturesData[11]->returnScale(), texturesData[11]->returnScale()};
        SDL_RenderCopy(renderer, p12, nullptr, &dstrect);
        dstrect = {texturesData[12]->returnX(), texturesData[12]->returnY(), texturesData[12]->returnScale(), texturesData[12]->returnScale()};
        SDL_RenderCopy(renderer, p13, nullptr, &dstrect);
        dstrect = {texturesData[13]->returnX(), texturesData[13]->returnY(), texturesData[13]->returnScale(), texturesData[13]->returnScale()};
        SDL_RenderCopy(renderer, p14, nullptr, &dstrect);
        dstrect = {texturesData[14]->returnX(), texturesData[14]->returnY(), texturesData[14]->returnScale(), texturesData[14]->returnScale()};
        SDL_RenderCopy(renderer, p15, nullptr, &dstrect);
        dstrect = {texturesData[15]->returnX(), texturesData[15]->returnY(), texturesData[15]->returnScale(), texturesData[15]->returnScale()};
        SDL_RenderCopy(renderer, p16, nullptr, &dstrect);
        dstrect = {texturesData[16]->returnX(), texturesData[16]->returnY(), texturesData[16]->returnScale(), texturesData[16]->returnScale()};
        SDL_RenderCopy(renderer, p17, nullptr, &dstrect);
        dstrect = {texturesData[17]->returnX(), texturesData[17]->returnY(), texturesData[17]->returnScale(), texturesData[17]->returnScale()};
        SDL_RenderCopy(renderer, p18, nullptr, &dstrect);
        dstrect = {texturesData[18]->returnX(), texturesData[18]->returnY(), texturesData[18]->returnScale(), texturesData[18]->returnScale()};
        SDL_RenderCopy(renderer, p19, nullptr, &dstrect);
        dstrect = {texturesData[19]->returnX(), texturesData[19]->returnY(), texturesData[19]->returnScale(), texturesData[19]->returnScale()};
        SDL_RenderCopy(renderer, p20, nullptr, &dstrect);
        dstrect = {texturesData[20]->returnX(), texturesData[20]->returnY(), texturesData[20]->returnScale(), texturesData[20]->returnScale()};
        SDL_RenderCopy(renderer, p21, nullptr, &dstrect);
        dstrect = {texturesData[21]->returnX(), texturesData[21]->returnY(), texturesData[21]->returnScale(), texturesData[21]->returnScale()};
        SDL_RenderCopy(renderer, p22, nullptr, &dstrect);
        dstrect = {texturesData[22]->returnX(), texturesData[22]->returnY(), texturesData[22]->returnScale(), texturesData[22]->returnScale()};
        SDL_RenderCopy(renderer, p23, nullptr, &dstrect);
        dstrect = {texturesData[23]->returnX(), texturesData[23]->returnY(), texturesData[23]->returnScale(), texturesData[23]->returnScale()};
        SDL_RenderCopy(renderer, p24, nullptr, &dstrect);
        dstrect = {texturesData[24]->returnX(), texturesData[24]->returnY(), texturesData[24]->returnScale(), texturesData[24]->returnScale()};
        SDL_RenderCopy(renderer, p25, nullptr, &dstrect);
    }

    SDL_RenderPresent(renderer);
}
void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

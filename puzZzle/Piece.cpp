#include "Piece.h"

Piece::Piece(){}
Piece::~Piece(){}

void Piece::init(SDL_Renderer *renderer, const char*path, int sc, int zIndex){
    scale = sc;
    z = zIndex;
    filepath = path;
    SDL_Surface* tmpSurf = IMG_Load("apple.png");
    tex = SDL_CreateTextureFromSurface(renderer, tmpSurf);
    SDL_FreeSurface(tmpSurf);
}

void Piece::update(int xpos, int ypos){
    x = xpos;
    y = ypos;
}

SDL_Texture* Piece::returnTex() {return tex;}

int Piece::returnX() {return x;}

int Piece::returnY() {return y;}
int Piece::returnZ() {return z;}

int Piece::returnScale() {return scale;}

const char* Piece::returnPath() {return filepath;}

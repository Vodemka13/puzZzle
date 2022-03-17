#ifndef UPDATE_H
#define UPDATE_H

#include <SDL.h>
#include <SDL_image.h>

class Piece{
public:
    Piece();
    ~Piece();

    void init(SDL_Renderer *renderer, const char* path, int sc, int zIndex);
    void update(int xpos, int ypos);
    SDL_Texture* returnTex();
    int returnX();
    int returnY();
    int returnZ();
    int returnScale();
    const char* returnPath();

private:
    int x = 0;
    int y = 0;
    int z = 0;
    int scale;
    const char* filepath;
    SDL_Texture* tex;
};
#endif // UPDATE_H

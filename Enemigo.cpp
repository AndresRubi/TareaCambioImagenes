#include "Enemigo.h"

Enemigo::Enemigo(SDL_Renderer* renderer)
{
    this-> renderer=renderer;
    textura = IMG_LoadTexture(renderer, "enemigo1.png");
    SDL_QueryTexture(textura, NULL, NULL, &rectangulo.w, &rectangulo.h);
    rectangulo.x = 2;
    rectangulo.y = 2;

}

Enemigo::~Enemigo()
{
    //dtor
}

void Enemigo::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rectangulo);

}

void Enemigo::logica()
{
    rectangulo.x++;
}

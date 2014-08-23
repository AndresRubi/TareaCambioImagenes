#ifndef ENEMIGO_H
#define ENEMIGO_H
#include<SDL2/SDL_image.h>

#include <SDL2/SDL.h>


class Enemigo
{
    public:
        SDL_Renderer* renderer;
        SDL_Texture* textura;
        SDL_Rect rectangulo;
        void logica();
        void dibujar();
        Enemigo(SDL_Renderer* renderer);
        virtual ~Enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H

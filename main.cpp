#include <iostream>
#include <SDL2/SDL.h>
#include "Particle.h"
#include "VectorClass.h"

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("Physics Engine Simulation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    if (NULL == window)
    {
        std::cout <<"Error in creating window: " <<SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Event windowEvent;
    
    SDL_Renderer* renderer = nullptr;

    //quick test for particle here  ()
    VectorClass p = VectorClass(10, 20, 30, 1);
    VectorClass v = VectorClass(10, 20, 30, 1);
    VectorClass a = VectorClass(10, 20, 30, 1);
    Particle test_p = Particle(p, v, a);
    test_p.resetCompMass(200);
    test_p.setCurrForce(2, 3, 2);
    float track = 2.0f;

    while (true)
    {
        if (SDL_PollEvent(&windowEvent))
        {
            if (SDL_QUIT == windowEvent.type)
            {
                break;
            }
            test_p.Update(track);
            test_p.print();
            track++;
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}
#include <iostream>
#include <SDL2/SDL.h>
#include "Particle.h"
#include "VectorClass.h"
#include "Car.h"
#include "Car_Car_Res.h"

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

    //temp check on car collision
    //set up car 1
    Car car1 = Car();
    VectorClass c1_initial_accel = VectorClass(5, 5, 5, 1);
    car1.setAccel(c1_initial_accel);
    car1.setForce(car1.getAccel().scaledVector(car1.getAccel(), car1.getMass()));
    VectorClass c1_p1 = VectorClass(80, 40, 20, 1);
    VectorClass c1_p2 = VectorClass(80, 20, 20, 1);
    VectorClass c1_p3 = VectorClass(20, 40, 20, 1);
    VectorClass c1_p4 = VectorClass(20, 20, 20, 1);
    car1.setPosition_FD(c1_p1);
    car1.setPosition_FP(c1_p2);
    car1.setPosition_RD(c1_p3);
    car1.setPosition_RP(c1_p4);
    //set up car 2
    Car car2 = Car();
    VectorClass c2_initial_accel = VectorClass(0,0,0, 1);   //a i s0 bc car 2 is at rest for this scenario
    car2.setAccel(c2_initial_accel);
    car2.setForce(c2_initial_accel);    //zeroed out since f = ma and a is 0
    VectorClass c1_p1 = VectorClass(120, 40, 20, 1); //a little farther out from car1 for eventual collision
    VectorClass c1_p2 = VectorClass(120, 20, 20, 1);
    VectorClass c1_p3 = VectorClass(180, 40, 20, 1);
    VectorClass c1_p4 = VectorClass(180, 20, 20, 1);
    car1.setPosition_FD(c1_p1);
    car1.setPosition_FP(c1_p2);
    car1.setPosition_RD(c1_p3);
    car1.setPosition_RP(c1_p4);

    while (true)
    {
        if (SDL_PollEvent(&windowEvent))
        {
            if (SDL_QUIT == windowEvent.type)
            {
                break;
            }
            //test_p.Update(track);
            //test_p.print();
            //track++;
            car1.MoveForward(4.0f);
            Car_Car_Res::Collide(car1, car2);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}
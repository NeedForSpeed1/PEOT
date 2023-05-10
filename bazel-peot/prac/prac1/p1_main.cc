#include <iostream>
#include <Particle.h>
#include "VectorClass.h"

//const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{


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

            test_p.Update(track);
            test_p.print();
            track++;

    }


    return EXIT_SUCCESS;
}
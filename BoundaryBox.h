
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "VectorClass.h"
#include "Particle.h"

using namespace std;

#pragma once

class BoundaryBox
{
public:
    BoundaryBox();
    BoundaryBox(VectorClass, VectorClass);

    ~BoundaryBox();

    VectorClass getMin();
    VectorClass getMax();

    


public:
    VectorClass center;
    VectorClass size;
    VectorClass halfSize;
    Particle body;
};



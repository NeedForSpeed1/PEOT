#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(float r)
{
    radius = r;
}

Circle::~Circle()
{
}

float Circle::getRadius()
{
    return radius;
}
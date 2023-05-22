#include <iostream>
#include <cmath>
#include "BoundaryBox.h"

BoundaryBox::BoundaryBox() : center(0, 0, 0, 1), size(0, 0, 0, 1)
{
}

BoundaryBox::BoundaryBox(VectorClass min, VectorClass max)
{

    this->size = max - min;

    this->halfSize.divideVector(this->size, 2.0);

    this->center = min + this->halfSize;
}

BoundaryBox::~BoundaryBox()
{
}

VectorClass BoundaryBox::getMin()
{
    return body.getPosition() - this->halfSize;
}
VectorClass BoundaryBox::getMax()
{
    return body.getPosition() + this->halfSize;
}

bool BoundaryBox::isPointIn(VectorClass vec)
{
    VectorClass min = getMin();
    VectorClass max = getMax();

    return vec.getX() <= max.getX() && min.getX() <= vec.getX() && vec.getY() <= max.getY() && min.getY() <= vec.getY();
}
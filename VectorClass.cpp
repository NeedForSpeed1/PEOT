#include "VectorClass.h"
#include <iostream>
#include <cmath>

VectorClass::VectorClass()
{
    X = 0.0;
    Y = 0.0;
}


VectorClass::VectorClass(float inx, float iny)
{
    X = inx;
    Y = iny;
}

VectorClass::~VectorClass()
{

}

float VectorClass::getX()
{
    return X;
}

float VectorClass::getY()
{
    return Y;
}

float VectorClass::sum()
{
    return X+Y;
}

VectorClass VectorClass:: operator+ (const VectorClass& b){
    VectorClass c;
    c.X = this->X+ b.X;    
    c.Y = this->Y+ b.Y;
    return c;
}

VectorClass VectorClass:: operator- (const VectorClass& b){
    VectorClass c;
    c.X = this->X- b.X;    
    c.Y = this->Y- b.Y;
    return c;
}

VectorClass VectorClass:: operator* (const VectorClass& b){
    VectorClass c;
    c.X = this->X* b.X;    
    c.Y = this->Y* b.Y;
    return c;
}

VectorClass VectorClass:: operator/ (const VectorClass& b){
    VectorClass c;
    c.X = this->X/b.X;    
    c.Y = this->Y/b.Y;
    return c;
}

float VectorClass::length()
{
    float a = this->X;
    float b = this->Y;
    return sqrt(a*a + b*b);
}

VectorClass VectorClass:: normalize (){
    VectorClass c;
    float len = length();
    c.X = this->X/len;    
    c.Y = this->Y/len;
    return c;
}


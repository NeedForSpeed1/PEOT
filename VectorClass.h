#ifndef VectorClass_H
#define VectorClass_H
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

#pragma once

class VectorClass
{
public:
    VectorClass();
    VectorClass(float, float);
    ~VectorClass();

float getX();
float getY();
    float sum();
    
    VectorClass operator+(const VectorClass &v);
    VectorClass operator-(const VectorClass &v);
    VectorClass operator*(const VectorClass &v);
    VectorClass operator/(const VectorClass &v);

    float length();
    VectorClass normalize();


private:
    float X;
    float Y;
};
float dist(VectorClass a, VectorClass b){
    float dx= a.getX() - b.getX();
    float dy= a.getY() - b.getY();
    return sqrt(dx*dx + dy*dy);
}

float dotProduct(VectorClass a, VectorClass b){    
    return a.getX()*b.getX() + a.getY()*b.getY();
}

float crossProduct(VectorClass a, VectorClass b){    
    return a.getX()*b.getY() - a.getY()*b.getX();
}


int main()
{

    float a = 4.0;
    float b = 6.0;

    VectorClass obj1(a, b);

    cout << obj1.sum() << endl;

    a = 2.0;
    b = 3.0;

    VectorClass obj2(a, b);

    VectorClass obj3;
    obj3 = obj1 + obj2;
    cout<< obj3.sum() <<endl;


    obj3 = obj1 - obj2;
    cout<< obj3.sum() <<endl;

    obj3 = obj1 * obj2;
    cout<< obj3.sum() <<endl;

    obj3 = obj1/obj2;
    cout<< obj3.sum() <<endl;

    cout<< obj1.length() <<endl;  


    cout<< dist(obj1, obj2) <<endl;

    obj3 = obj1.normalize();
    cout<< obj3.sum() <<endl;

    cout<< dotProduct(obj1, obj2) <<endl;

    cout<< crossProduct(obj1, obj2) <<endl;

}

#endif
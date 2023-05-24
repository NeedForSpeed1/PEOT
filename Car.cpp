//from car header
#include "Car.h"

Car::Car() : car_mass(0), car_pos(0,0,0,1), car_velocity(0,0,0,1), car_accel(0,0,0,1), car_force(0,0,0,1)
{}

void Car::setMass(float m)
{
    this->car_mass = m;
}

void Car::setForce(VectorClass f)
{
    this->car_force = f;
}

void Car::setVelocity(VectorClass v)
{
    this->car_velocity = v;
}

void Car::setPosition(VectorClass p)
{
    this->car_pos = p;
}

void Car::setAccel(VectorClass a)
{
    this->car_accel = a;
}

float Car::getMass()
{
    return this->car_mass;
}

VectorClass Car::getForce()
{
    return this->car_force;
}

VectorClass Car::getVelocity()
{
    return this->car_velocity;
}

VectorClass Car::getPos()
{
    return this->car_pos;
}

VectorClass Car::getAccel()
{
    return this->car_accel;
}

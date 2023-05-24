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

void Car::setPosition_FD(VectorClass p)
{
    this->car_pos_front_driver = p;
}

void Car::setPosition_FP(VectorClass p)
{
    this->car_pos_front_passenger = p;
}

void Car::setPosition_RD(VectorClass p)
{
    this->car_pos_rear_driver = p;
}

void Car::setPosition_RP(VectorClass p)
{
    this->car_pos_rear_passenger = p;
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

VectorClass Car::getPos_FD()
{
    return this->car_pos_front_driver;
}

VectorClass Car::getPos_FP()
{
    return this->car_pos_front_passenger;
}

VectorClass Car::getPos_RD()
{
    return this->car_pos_rear_driver;
}

VectorClass Car::getPos_RP()
{
    return this->car_pos_rear_passenger;
}

VectorClass Car::getAccel()
{
    return this->car_accel;
}

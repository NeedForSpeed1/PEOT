//need to decide on the mass and other starting elements
#include "VectorClass.h"

class Car 
{
    public:

    Car();
    void setMass(float m);
    void setForce(VectorClass f);
    void setVelocity(VectorClass v);
    void setPosition(VectorClass p);
    void setAccel(VectorClass a);
    float getMass();
    VectorClass getForce();
    VectorClass getVelocity();
    VectorClass getPos();
    VectorClass getAccel();

    private:
    float car_mass;
    VectorClass car_pos;
    VectorClass car_velocity;
    VectorClass car_accel;
    VectorClass car_force;
};
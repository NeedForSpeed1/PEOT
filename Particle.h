#pragma once
//include math library here
#include<iostream>

class Particle
{

public:
	//NOTE: position, velocity, and acceleration are actually vectors
		//they are written as floats while the vector class is getting made
		//once vector class isimplemented, these data types will change to vectors
		//id data member will remain an int

	int id;	//may be helpful in tracking particles and mem management later...

	const float drag = 0.999;	//prevents precision errors from floats that could lead to a false sense of increased energy over time with no stimulant

	float compMass; //compliment of mass (its inverse)
	
	float position;

	float velocity;

	float acceleration;



	Particle();	//default ctr

	Particle(float p, float v, float a);	//specialized ctr

	Particle(const Particle &p);	//copy ctr

	Particle& operator=(const Particle& p);	//assignment operator

	~Particle();	//destructor

	float getPosition();

	float getVelocity();

	float getAcceleration();

	float getCompMass();

	void resetCompMass(float m);

	void setPosition(float p);

	void setAcceleration(float a);

	void setVelocity(float v);

	int getId();

	void resetId(int new_id);

	void Update(float p, float v, float a, float time);	//update all at once (broken down below for unit testing)

	void UpdatePosition(float v, float a, float time);	//update position in isolation

	void UpdateVelocity(float new_a, float time);	//update velocity in isolation

	void UpdateAcceleration_Manual(float a);	//update acceleration in isolation manually

	float UpdateAcceleration(float); 
};
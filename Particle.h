#pragma once
//include math library here
#include<iostream>

class Particle
{
Private: 
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


Public:

	Particle();	//default ctr

	Particle(float p, float v, float a);	//specialized ctr

	Particle(&Particle p);	//copy ctr

	//assignment ctr

	~Particle() {};

	float getPosition();

	float getVelocity();

	float getAcceleration();

	int getId();

	void resetId(int new_id);

	void Update(float p, float v, float a);	//update all at once (broken down below for unit testing)

	void UpdatePosition(float p);	//update position in isolation

	void UpdateVelocity(float v);	//update velocity in isolation

	void UpdateAcceleration(float a);	//update acceleration in isolation
};
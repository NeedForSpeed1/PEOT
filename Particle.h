#pragma once
//include math library here
#include<iostream>

class Particle
{
Private: 

	float position;

	float velocity;

	float acceleration;

	float id;	//may be helpful in tracking particles and mem management later...

Public:

	Particle();	//default ctr

	Particle(float p, float v, float a);	//specialized ctr

	Particle(&Particle p);	//copy ctr

	//assignment ctr

	float getPosition();

	float getVelocity();

	float getAcceleration();

	float getId();

	void resetId(float new_id);

	void Update(float p, float v, float a);	//update all at once (broken down below for unit testing)

	void UpdatePosition(float p);	//update position in isolation

	void UpdateVelocity(float v);	//update velocity in isolation

	void UpdateAcceleration(float a);	//update acceleration in isolation
};
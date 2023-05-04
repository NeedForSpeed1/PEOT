#include "Particle.h"

Paticle::Particle(): this.id(0), this.position(0), this.velocity(0), this.acceleration(0), 
this.compMass(0)
{}

Particle::Particle(float p, float v, float a): this.id(0), this.position(p), this.velocity(v), 
this.acceleration(a), this.compMass(0)
{}

Particle::Particle(const Particle& p)
{
	this* = p; //clean up later to breakdown by vector attributes for a deep copy
}

Particle& operator=(const Particle& p)
{
	this = p;
	return this*;
}

Particle::~Particle() {//call vector destructors for p, v, and a here}

float Particle::getPosition()
{
	return this.position;
}

float Particle::getVelocity()
{
	return this.velocity;
}

float Particle::getAcceleration()
{
	return this.acceleration;
}

int Particle::getId()
{
	return this.id;
}

float Particle::getCompMass()
{
	return this.compMass;
}

void Particle::resetCompMass(float m)
{
	this.compMass = m;
}
int Particle::resetID(int new_id)
{
	this.id = new_id;
}

void Particle::Update(float p, float v, float a, float time)
{
	if (trhis.compMas <= 0.0f) { return }	//break early because something went wrong

	this.UpdatePosition(v, a, time);
	this.UpdateAcceleration(a);
	this.UpdateVelocity(a, time);
	//this.velocity *= float_pow(this.drag, time);	//custom power method that works with and returns floats needs to be implemented in math library first

	//set up clearing of forces here later
}

void Particle::UpdatePosition(float v, float a, float time)
{
	//this.position.addScaledVector(v, t);
	//thisposition.addscaledVector(a, time * time * 0.05);
}

void Particle : UpdateVelocity(float new_a, float time)
{
	//velocity is just the 1st derivative of the position
	this.velocity = v;
	//this.velocity.addScaledVector(a, time)  //change to this once vect implemented
}

void Particle::UpdateAcceleration_Manual(float a)
{
	//acceleration is just the 2nd derivative of the position (1st derivative of velocity)
	this.acceleration = a;
	//gets new a for velocity update, this will get expanded upon later
}

float Particle::UpdateAccaleration(float a)
{
	this.acceleration = a;
	return a;
}
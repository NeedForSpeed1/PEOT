#include "Particle.h"

Paticle::Particle() {}

Particle::Particle(float p, float v, float a)
{
	this.position = p;
	this.velocity = v;
	this.acceleration = a;
	this.id = 1;	//gets reset later, but could also use a rand function for assignment
}

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

float Particle::getId()
{
	return this.id;
}

float Particle::resetID(float new_id)
{
	this.id = new_id;
}

void Particle::Update(float p, float v, float a)
{
	this.UpdatePosition(p);
	this.UpdateVelocity(v);
	this.UpdateAcceleration(a);
}

void Particle::UpdatePosition(float p)
{
	this.position = p;
}

void Particle : UpdateVelocity(float v)
{
	this.velocity = v;
}

void Particle::UpdateAcceleration(float a)
{
	this.acceleration = a;
}
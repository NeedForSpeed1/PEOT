#include "Particle.h"

Paticle::Particle(): this.id(0), this.position(0), this.velocity(0), this.acceleration(0) 
{}

Particle::Particle(float p, float v, float a): this.id(0), this.position(p), this.velocity(v), this.acceleration(a)
{}

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

int Particle::resetID(int new_id)
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
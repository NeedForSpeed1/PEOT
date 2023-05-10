#include "Particle.h"

Particle::Particle(): id(0), position(0), velocity(0), acceleration(0), compMass(0)
{}

Particle::Particle(float p, float v, float a): id(0), position(p), velocity(v), 
acceleration(a), compMass(0)
{}

Particle::Particle(const Particle& p)
{
	this->acceleration = p.acceleration; //clean up later to breakdown by vector attributes for a deep copy
	this->compMass = p.compMass;
	this->id = p.id;
	this->position = p.position;
	this->velocity = p.velocity;
	//*this = p;
}

Particle& Particle::operator=(const Particle& p)
{
	//this->acceleration = p.acceleration; //clean up later to breakdown by vector attributes for a deep copy
	//this->compMass = p.compMass;
	//this->id = p.id;
	//this->position = p.position;
	//this->velocity = p.velocity;
	*this = p;
	return *this;
}

Particle::~Particle() {/*call vector destructors for p, v, and a here */ }

float Particle::getPosition()
{
	return position;
}

float Particle::getVelocity()
{
	return velocity;
}

float Particle::getAcceleration()
{
	return acceleration;
}

int Particle::getId()
{
	return id;
}

float Particle::getCompMass()
{
	return compMass;
}

void Particle::resetCompMass(float m)
{
	compMass = m;
}

void Particle::resetId(int new_id)
{
	id = new_id;
}

void Particle::setPosition(float p)
{
	position = p;
}

void Particle::setAcceleration(float a)
{
	acceleration = a;
}

void Particle::setVelocity(float v)
{
	velocity = v;
}

void Particle::Update(float p, float v, float a, float time)
{
	float cm = compMass;
	if (cm <= 0.0f) { return ;}	//break early because something went wrong

	UpdatePosition(v, a, time);
	UpdateAcceleration(a);
	UpdateVelocity(a, time);
	//this.velocity *= float_pow(this.drag, time);	//custom power method that works with and returns floats needs to be implemented in math library first

	//set up clearing of forces here later
}

void Particle::UpdatePosition(float v, float a, float time)
{
	//this.position.addScaledVector(v, t);
	//thisposition.addscaledVector(a, time * time * 0.05);
}

void Particle::UpdateVelocity(float new_a, float time)
{
	//velocity is just the 1st derivative of the position
		//velocity = v;		//FIX THIS NEXT
	//this.velocity.addScaledVector(a, time)  //change to this once vect implemented
}

void Particle::UpdateAcceleration_Manual(float a)
{
	//acceleration is just the 2nd derivative of the position (1st derivative of velocity)
	acceleration = a;
	//gets new a for velocity update, this will get expanded upon later
}

float Particle::UpdateAcceleration(float a)
{
	acceleration = a;
	return a;
}
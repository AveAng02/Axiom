
#include "Core/Vector.h"

#include "Body/Circle.h"

namespace Minator
{
	void Circle::updatePosition(float time) 
	{

	}

	void Circle::addVelocity(velocity2D velocity, point2D poc) 
	{
		// TODO : account for point of contact and angular momentum
		this->velocity += velocity;
	}

	void Circle::addForce(force2D force, point2D poc) 
	{
		// TODO : account for point of contact and angular momentum
		this->force += force;
	}
}

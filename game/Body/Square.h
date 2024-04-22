#pragma once

#include "Core/Vector.h"
#include "Core/Body.h"

namespace Minator
{
	class Square : public Body
	{
	public:

		Square(color4D bodyColor_ = color4D(190, 33, 55, 255),
			float mass_ = 0.0f,
			velocity2D vel = velocity2D(),
			float sigma_ = 0.0f,
			point2D a_ = point2D(),
			point2D b_ = point2D(),
			point2D c_ = point2D(), 
			point2D d_ = point2D())
			: a(a_), b(b_), c(c_), d(d_)
		{
			bodyColor = bodyColor_;
			mass = mass_;
			velocity = vel;
			sigma = sigma_;
			hasCollided = false;
			hasGravity = false;
			hasInfiniteMass = false;

			bbox = AABB(point3D(a), point3D(c));
		}

		virtual void updatePosition(float time) override;

		virtual void addVelocity(velocity2D velocity, point2D poc) override;

		virtual void addForce(force2D force, point2D poc) override;

		virtual point2D furthestSupportPoint(const direction2D d) const override;

		point2D a, b, c, d;
	};
}


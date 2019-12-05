#pragma once
#include "Core.h"
#include "Vector2.h"
#include <vector>

namespace DOT
{
	class Dot
	{
	public:
		Dot(float mass, Vector2 initialPosition);

		float mass;
		Vector2 position;
		Vector2 velocity;
	};
}
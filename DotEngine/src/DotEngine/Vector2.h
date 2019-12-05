#pragma once

#include "Core.h"

namespace DOT
{
	struct DOT_API Vector2
	{
	public:
		static float dot(Vector2 vec1, Vector2 vec2);
		static float cross(Vector2 vec1, Vector2 vec2);
		static float distance(Vector2 vec1, Vector2 vec2);

		Vector2(float x, float y);
		Vector2();
		float x, y;

		float length() const;
		void normalize();
		Vector2 get_orthogonal() const;

		Vector2 operator + (Vector2 otherVector) const;
		Vector2 operator - (Vector2 otherVector) const;
		void operator += (Vector2 otherVector);
		void operator -= (Vector2 otherVector);

		Vector2 operator / (float scalar) const;
		Vector2 operator * (float scalar) const;
		void operator /= (float scalar);
		void operator *= (float scalar);
	};
}
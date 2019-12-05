#include "Vector2.h"
#include <math.h>

namespace DOT
{
	float Vector2::dot(Vector2 vec1, Vector2 vec2)
	{
		return (vec1.x * vec2.x) + (vec1.y * vec2.y);
	}

	float Vector2::cross(Vector2 vec1, Vector2 vec2)
	{
		return (vec1.x * vec2.y) - (vec1.y * vec2.x);
	}

	float Vector2::distance(Vector2 vec1, Vector2 vec2)
	{
		return (vec1 - vec2).length();
	}

	Vector2::Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2::Vector2()
	{
		this->x = 0;
		this->y = 0;
	}

	float Vector2::length() const
	{
		return sqrtf(powf(x, 2) + powf(y, 2));
	}

	void Vector2::normalize()
	{
		(*this) /= this->length();
	}

	Vector2 Vector2::get_orthogonal() const
	{
		return Vector2(-this->y, this->x);
	}

	Vector2 Vector2::operator+(Vector2 otherVector) const
	{
		return Vector2(this->x + otherVector.x, this->y + otherVector.y);
	}

	Vector2 Vector2::operator-(Vector2 otherVector) const
	{
		return Vector2(this->x - otherVector.x, this->y - otherVector.y);
	}

	void Vector2::operator+=(Vector2 otherVector)
	{
		this->x += otherVector.x;
		this->y += otherVector.y;
	}

	void Vector2::operator-=(Vector2 otherVector)
	{
		this->x -= otherVector.x;
		this->y -= otherVector.y;
	}

	Vector2 Vector2::operator/(float scalar) const
	{
		return Vector2(this->x / scalar, this->y / scalar);
	}

	Vector2 Vector2::operator*(float scalar) const
	{
		return Vector2(this->x * scalar, this->y * scalar);
	}

	void Vector2::operator/=(float scalar)
	{
		this->x /= scalar;
		this->y /= scalar;
	}

	void Vector2::operator*=(float scalar)
	{
		this->x *= scalar;
		this->y *= scalar;
	}
}
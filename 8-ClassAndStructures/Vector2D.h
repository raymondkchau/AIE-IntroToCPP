#pragma once

struct Vector2D
{
	float x;
	float y;
};

Vector2D sum(Vector2D vertex1, Vector2D vertex2);
Vector2D diff(Vector2D vertex1, Vector2D vertex2);
Vector2D dist(Vector2D vertex1, Vector2D vertex2);
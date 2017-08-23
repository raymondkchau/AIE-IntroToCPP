#include "Vector2D.h"

Vector2D sum(Vector2D vertex1, Vector2D vertex2)
{
	float vertx = vertex1.x + vertex2.x;
	float verty = vertex1.y + vertex2.y;

	Vector2D vertex3{ vertx, verty };

	return vertex3;
}

Vector2D diff(Vector2D vertex1, Vector2D vertex2)
{
	float vertx = vertex1.x - vertex2.x;
	float verty = vertex1.y - vertex2.y;

	Vector2D vertex3{ vertx, verty };

	return vertex3;
}

Vector2D dist(Vector2D vertex1, Vector2D vertex2)
{
	float vertx = (vertex2.x - vertex1.x) * 2;
	float verty = (vertex2.y - vertex1.y) * 2;

	Vector2D vertex3{ vertx, verty };

	return vertex3;
}
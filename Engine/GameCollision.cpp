#include "GameCollision.h"

bool GameCollision::RectangleAndCircle(RECT rect, int circlex, int circley, int circleRadius)
{
	int px = circlex;
	int py = circley;

	if (px < rect.left)
		px = rect.left;
	else if (px > rect.right)
		px = rect.right;

	if (py > rect.bottom)
		py = rect.bottom;
	else if (py < rect.top)
		py = rect.top;

	int dx = px - circlex;
	int dy = py - circley;

	return (dx * dx + dy * dy) <= circleRadius * circleRadius;
}
#pragma once
#include "Graphics.h"
#include "Player.h"

class Ball
{
	int x;
	int y;
	int vx;
	int vy;
	int time = 0;
public:
	Ball();
	void Draw(Graphics& gfx) const;
	void Update();
	void InteractPlayer(const Player& player);
	int GetCenterX() const { return x + radius; }
	int GetCenterY() const { return y + radius; }

	static constexpr int radius = 30;

	static constexpr int width = 60;
	static constexpr int height = 60;
	static constexpr int maxSpeed = 30;
	static constexpr int speedIncreasePer10Second = 2;
};


#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Mouse.h"

class Player
{
	int x = 100;
	int y = 200;
	int leftBorder = 100;
	int rightBorder = 250;
	int score = 0;
public:
	void Draw(Graphics& gfx) const;
	void DrawLine(Graphics& gfx) const;
	void HandlekeyboardInput(const Keyboard& kbd);
	void HandleMouseMove(const Mouse& mouse);
	int GetCenterX() const { return x + width / 2; }
	int GetCenterY() const { return y + height / 2; }
	int GetScore() const { return score; }
	void PlusScore() { ++score; }
	RECT GetBound() const;
	
	void SetX(int x) { this->x = x; }
	void SetY(int y) { this->y = y; }
	void SetLeftBorder(int l) { this->leftBorder = l; }
	void SetRightBorder(int r) { this->rightBorder = r; }

	static constexpr int width = 23;
	static constexpr int height = 180;
};


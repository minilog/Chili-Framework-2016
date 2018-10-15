#pragma once
#include "Graphics.h"

class Numbers
{
	static void Draw0(Graphics& gfx, int x, int y);
	static void Draw1(Graphics& gfx, int x, int y);
	static void Draw2(Graphics& gfx, int x, int y);
	static void Draw3(Graphics& gfx, int x, int y);
	static void Draw4(Graphics& gfx, int x, int y);
	static void Draw5(Graphics& gfx, int x, int y);
	static void Draw6(Graphics& gfx, int x, int y);
	static void Draw7(Graphics& gfx, int x, int y);
	static void Draw8(Graphics& gfx, int x, int y);
	static void Draw9(Graphics& gfx, int x, int y);

public:
	static void Draw(Graphics& gfx, int x, int y, int number);

	static constexpr int width = 19;
	static constexpr int height = 30;
};


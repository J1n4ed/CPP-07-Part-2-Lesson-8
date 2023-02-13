// square.cpp

#include "square.h"

import jinx_exceptions;

// квадрат (все стороны равны, все углы равны 90);

jinx::Square::Square(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : TwoSideSquare(figureName, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D)
{
	bool badFigure = false;

	if ((side_a != side_b) || (side_c != side_d))
	{
		badFigure = true;
	}
	else if ((side_a != side_c) || (side_b != side_d))
	{
		badFigure = true;
	}
	else if (angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90)
	{
		badFigure = true;
	}

	if (badFigure)
	{
		throw jinx::CreateFigureException();
	}
}
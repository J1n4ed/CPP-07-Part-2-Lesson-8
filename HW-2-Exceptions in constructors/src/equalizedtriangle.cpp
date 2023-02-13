// equaliziedtriangle.cpp

#include "equalizedtriangle.h"

import jinx_exceptions;

// равносторонний треугольник (все стороны* равны, все углы равны 60);
// *наверное имелись в виду углы

jinx::EqualizedTriangle::EqualizedTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : EqualSidedTriangle(figureName, side_a, side_b, side_c, angle_A, angle_B, angle_C)
{
	bool badFigure = false;

	if (angle_A != 60)
	{
		badFigure = true;
	}
	else if (angle_B != 60)
	{
		badFigure = true;
	}
	else if (angle_C != 60)
	{
		badFigure = true;
	}

	if (badFigure)
	{
		throw jinx::CreateFigureException();
	}
}
// equalsidedtriangle.cpp

#include "equalsidedtriangle.h"

import jinx_exceptions;

// равнобедренный треугольник (стороны a и c равны, углы A и C равны);

jinx::EqualSidedTriangle::EqualSidedTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(figureName, side_a, side_a, side_c, angle_A, angle_B, angle_C)
{
	if (side_a != side_c)
	{
		throw jinx::CreateFigureException();
	} 
	else if (angle_A != angle_B)
	{
		throw jinx::CreateFigureException();
	}
}
// quadtriangle.cpp

#include "quadtriangle.h"

import jinx_exceptions;

// прямоугольный треугольник (угол C всегда равен 90);

jinx::QuadTriangle::QuadTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(figureName, side_a, side_b, side_c, angle_A, angle_B, angle_C)
{
	if (angle_C != 90)
	{
		throw jinx::CreateFigureException();
	}
}
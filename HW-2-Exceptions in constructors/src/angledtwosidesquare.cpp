// angledtwosidesquare.cpp

#include "angledtwosidesquare.h"

import jinx_exceptions;

// параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);

jinx::AngledTwoSideSquare::AngledTwoSideSquare(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(figureName, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D)
{
	bool badFigure = false;

	if (side_a != side_c || side_b != side_d)
	{
		badFigure = true;
	}
	else if (angle_A != angle_C || angle_B != angle_D)
	{
		badFigure = true;
	}

	if (badFigure)
	{
		throw jinx::CreateFigureException();
	}
}
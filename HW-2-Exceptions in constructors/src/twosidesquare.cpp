// twosidedsquare.cpp

#include "twosidesquare.h"

import jinx_exceptions;

// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);

jinx::TwoSideSquare::TwoSideSquare(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(figureName, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D)
{
	bool badFigure = false;
	
	if (side_a != side_c)
	{
		badFigure = true;
	}
	else if (side_b != side_d)
	{
		badFigure = true;
	}
	else if ( (angle_A != angle_B) || (angle_C != angle_D) )
	{
		badFigure = true;
	}
	else if ((angle_A != 90) || (angle_C != 90))
	{
		badFigure = true;
	}

	if (badFigure)
	{
		throw jinx::CreateFigureException();
	}
}
/*
Реализаци¤ функций
*/

#include "triangle.h"
#include <iostream>

import jinx_exceptions;

jinx::Triangle::Triangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure(figureName)
{
	// треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);

	if ((angle_A + angle_B + angle_C) != 180)
	{
		throw jinx::CreateFigureException();
	}

	side_a_ = side_a;
	side_b_ = side_b;
	side_c_ = side_c;

	angle_A_ = angle_A;
	angle_B_ = angle_B;
	angle_C_ = angle_C;
}

/*

Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "Стороны: а = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "Углы: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}
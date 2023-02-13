/*
Реализаци¤ функций
*/

#include "quadrangle.h"
#include <iostream>

import jinx_exceptions;

// четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);

jinx::Quadrangle::Quadrangle(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(figureName)
{
	if ((angle_A + angle_B + angle_C + angle_D) != 360)
	{
		throw jinx::CreateFigureException();
	}
	
	side_a_ = side_a;
	side_b_ = side_b;
	side_c_ = side_c;
	side_d_ = side_d;

	angle_A_ = angle_A;
	angle_B_ = angle_B;
	angle_C_ = angle_C;
	angle_D_ = angle_D;
}

/*

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

*/
void jinx::Quadrangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "Стороны: а = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << " d = " << this->side_d_ << '\n';
	std::cout << "Углы: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << " D = " << this->angle_D_ << std::endl;
}
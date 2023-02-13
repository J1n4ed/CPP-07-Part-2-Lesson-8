// figure.cpp

/*
��������� �������
*/

#include "figure.h"
#include <iostream>

import jinx_exceptions;

jinx::Figure::Figure(std::string figureName)
{
	figureName_ = figureName;
}

/*
vprint
*/
void jinx::Figure::print_figure()
{
	std::cout << this->figureName_;
}

/*
����� ����� ������
*/
std::string jinx::Figure::get_figure_name()
{
	return this->figureName_;
}
// main.cpp

/*
  13.02.2023
  ���� 2, ������� 8
  ������ 2, ���������� � �������������
  CPP-07
  @j1n4ed
*/

#include "src/equalizedtriangle.h"
#include "src/angledsquare.h"
#include "src/square.h"
#include "src/quadtriangle.h"
#include <iostream>
#include <Windows.h>

import jinx_exceptions;

void print_info(jinx::Figure*);

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// pointers

	jinx::Triangle* ptr_Triangle;
	jinx::Quadrangle* ptr_Quadrangle;
	jinx::Figure* ptr_Figure;

	// --------------------------------------------------------------
	// Objects

	// TRY ----------------------------------------------------------------
	try
	{
		// �����������
		jinx::Triangle figTriangle("�����������", 10, 20, 30, 50, 60, 70);
		ptr_Figure = &figTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// ������������� �����������
		jinx::QuadTriangle figQuadTriangle("������������� �����������", 10, 20, 30, 50, 40, 90);		
		ptr_Figure = &figQuadTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// �������������� �����������
		jinx::EqualSidedTriangle figEqualSideTriangle("�������������� �����������", 10, 20, 10, 50, 80, 50);		
		ptr_Figure = &figEqualSideTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// �������������� �����������
		jinx::EqualizedTriangle figEqualizedTriangle("�������������� �����������", 30, 30, 30, 60, 60, 60);		
		ptr_Figure = &figEqualizedTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// ��������������
		jinx::Quadrangle figQuadrangle("��������������", 10, 20, 30, 40, 50, 60, 70, 80);		
		ptr_Figure = &figQuadrangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// �������������
		jinx::TwoSideSquare figTwoSideSquare("�������������", 10, 20, 10, 20, 90, 90, 90, 90);		
		ptr_Figure = &figTwoSideSquare;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// �������
		jinx::Square figSquare("�������", 20, 20, 20, 20, 90, 90, 90, 90);		
		ptr_Figure = &figSquare;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// ������������
		jinx::AngledTwoSideSquare figAngleTwoSideSq("������������", 20, 30, 30, 40, 30, 20, 90, 60);
		ptr_Figure = &figAngleTwoSideSq;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// ����
		jinx::AngledSquare figAngledSq("����", 30, 30, 30, 30, 20, 160, 20, 160);		
		ptr_Figure = &figAngledSq;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// ---------------------------------------------------------------

	// clear and exit

	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}

void print_info(jinx::Figure* Figure)
{
	Figure->print_figure();
}
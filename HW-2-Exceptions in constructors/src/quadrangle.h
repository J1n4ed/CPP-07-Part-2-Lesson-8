// quadrangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{
	/*
	����� ��������������
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		void print_figure() override;

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		Quadrangle() = delete;

		Quadrangle(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_, side_d_;
		int angle_A_, angle_B_, angle_C_, angle_D_;

	}; // END OF class Quadrangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
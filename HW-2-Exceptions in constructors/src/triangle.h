// triangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{

	/*
	Любой треуголник
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //

		void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		Triangle() = delete;

		Triangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_;
		int angle_A_, angle_B_, angle_C_;

	}; // END OF class Triangle // ---------------------------------------------------------------------------------------------------------------- //

} // END OF jinx
// equalsidedtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	Равнобедренный треугольник
	*/
	class EqualSidedTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		EqualSidedTriangle() = delete;

		EqualSidedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualSidedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
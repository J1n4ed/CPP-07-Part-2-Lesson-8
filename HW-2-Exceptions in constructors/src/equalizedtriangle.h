// equalizedtriangle.h

#pragma once

#include "equalsidedtriangle.h"
#include <string>

namespace jinx
{
	/*
	Равносторонний треугольник
	*/
	class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		EqualizedTriangle() = delete;

		EqualizedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
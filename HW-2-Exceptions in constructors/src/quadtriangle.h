// quadtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	Прямоугольный треугольник
	*/
	class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		QuadTriangle() = delete;

		QuadTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
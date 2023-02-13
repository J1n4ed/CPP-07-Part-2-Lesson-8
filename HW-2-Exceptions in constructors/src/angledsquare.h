// angledsquare.h

#pragma once

#include "angledtwosidesquare.h"
#include <string>

namespace jinx
{
	/*
	Ромб
	*/
	class AngledSquare : public AngledTwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		AngledSquare() = delete;

		AngledSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
}
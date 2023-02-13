// angledtwosidesquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	������������
	*/
	class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		AngledTwoSideSquare() = delete;

		AngledTwoSideSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
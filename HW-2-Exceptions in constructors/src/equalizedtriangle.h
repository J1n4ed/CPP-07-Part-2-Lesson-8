// equalizedtriangle.h

#pragma once

#include "equalsidedtriangle.h"
#include <string>

namespace jinx
{
	/*
	�������������� �����������
	*/
	class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		EqualizedTriangle() = delete;

		EqualizedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
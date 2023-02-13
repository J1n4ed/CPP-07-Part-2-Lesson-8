// exceptions module for homework 2, lesson 8

export module jinx_exceptions;

import <iostream>;

namespace jinx
{

	export class CreateFigureException : public std::exception
	{
	public:
		const char* what() const override
		{
			return "Задан неверный параметр фигуры!\n";
		}
	};

} // END OF jinx namespace
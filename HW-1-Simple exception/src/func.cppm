// func.cpp
// module test

export module func;

import <iostream>;
import <string>;

export namespace jinx
{

	export class BadLengthException : public std::exception
	{
	public:
		const char* what() const override
		{
			return "�� ����� ����� ��������� �����! ���������� ������";
		}
	};

	export int function(std::string str, int forbidden_length)
	{

		if (str.length() == forbidden_length)
		{
			throw BadLengthException();
		}

		std::cout << "����� ����� """ << str << """" << " ����� " << str.length() << '\n';

		return 0;
	} // END OF function()

} // END OF jinx namespace
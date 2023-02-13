// main.cpp

/*
  13.02.2023
  Тема 2, Занятие 8
  Работа 1, Простое исключение
  CPP-07
  @j1n4ed
*/

import <iostream>;
#include <Windows.h>

import func;

int main(int argc, char** argv)
{
	// Console settings ----------------------
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Variables -----------------------------
	std::string userString;
	int forbiddenLength;
	bool exitFlag = false;
	
	// Main body -----------------------------
	std::cout << "Введите запретную длину: ";
	std::cin >> forbiddenLength;

	do
	{		
		std::cout << "Введите слово: ";
		std::cin >> userString;

		try
		{
			jinx::function(userString, forbiddenLength);
		}
		catch (const jinx::BadLengthException& ex)
		{
			std::cout << ex.what();
			exitFlag = true;
		}
		catch (...)
		{
			std::cout << "Unknown Error!";
		}

	} while (!exitFlag);

	// clean & exit --------------------------
	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
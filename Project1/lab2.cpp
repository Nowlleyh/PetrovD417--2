#include<iostream>
#include<locale.h>
#include<iomanip> 
#include<bitset>


// КОНСТРУКЦИИ ЯЗЫКА C/C++

int main()
{
	setlocale(LC_ALL, "Russian");

	// 1. УСЛОВНЫЕ ПЕРЕХОДЫ
	// 1.1. Оператор if и if...else...
	int salary = 120000;
	bool has_education = false;
	if ((salary < 150000) && has_education) //в скобках должна быть логическая переменная или условие, выдающее true или false
	{
		std::cout << "зашли под if" << std::endl;
		// всё, что внутри скобок if выолняется если условие в круглых скобках равно true
	}

	std::string name;
	std::cout << "Введите ваше имя на латинице:\t";
	std::cin >> name;
	if (name == "Ivan")
	{
		std::cout << "зашли под второй if" << std::endl;
	}
	else
	{
		std::cout << "зашли под else" << std::endl;
	}

	// 1.2 Оператор switch...case...default
	// 1.3 Термарный оператор

	// 2. Конструкция цикла
	// 2.1. Счетный цикл for
	// 2.2. Цикл с пред. условием while
	// 2.3. Цикл с пост-условием do...while





	system("pause");
	return 0;
}
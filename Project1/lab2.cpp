#include<iostream>
#include<locale.h>
#include<iomanip> 
#include<bitset>


// ����������� ����� C/C++

int main()
{
	setlocale(LC_ALL, "Russian");

	// 1. �������� ��������
	// 1.1. �������� if � if...else...
	int salary = 120000;
	bool has_education = false;
	if ((salary < 150000) && has_education) //� ������� ������ ���� ���������� ���������� ��� �������, �������� true ��� false
	{
		std::cout << "����� ��� if" << std::endl;
		// ��, ��� ������ ������ if ���������� ���� ������� � ������� ������� ����� true
	}

	std::string name;
	std::cout << "������� ���� ��� �� ��������:\t";
	std::cin >> name;
	if (name == "Ivan")
	{
		std::cout << "����� ��� ������ if" << std::endl;
	}
	else
	{
		std::cout << "����� ��� else" << std::endl;
	}

	// 1.2 �������� switch...case...default
	// 1.3 ��������� ��������

	// 2. ����������� �����
	// 2.1. ������� ���� for
	// 2.2. ���� � ����. �������� while
	// 2.3. ���� � ����-�������� do...while





	system("pause");
	return 0;
}
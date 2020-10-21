#include<iostream>
#include<locale.h>

// —кал€рное произведение двух векторов
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double a[3];
	double b[3];
	double s = 0;
	std::cout << "¬ведите значение вектора a:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> a[i];
	std::cout << "¬ведите значение вектора b:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> b[i];
	for (i = 0; i < 3; i++)
		s += a[i] * b[i];
	std::cout << "—кал€рное произведение двух векторов = " << s << std::endl;

	std::system("pause");

	return 0;
}

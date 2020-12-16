#include<iostream>
#include<locale.h>

//—кал€рное произведение векторов с использованием динамической пам€ти

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int size1 = 3;
	int size2 = 3;
	int i;
	int s = 0;


	int* v1 = new int[size1];
	cout << "¬ведите координаты вектора a: " << endl;
	for (i = 0; i < size1; i++)
	{
		cin >> v1[i];
	}


	double* v2 = new double[size2];
	cout << "¬ведите координаты вектора b: " << endl;
	for (i = 0; i < size2; i++)
	{
		cin >> v2[i];
	}

	

	for (i = 0; i < 3; i++)
		s += v1[i] * v2[i];
	cout << "—кал€рное произведение векторов = " << s << endl;



	delete[]v1, v2;

	return;

	system("pause");
}

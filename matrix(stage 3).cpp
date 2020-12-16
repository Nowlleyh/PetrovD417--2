#include <iostream>
#include <string>
#include <locale.h>

// —кал€рное произведение векторов с использованием класса

using namespace std;

class scalar
{
public:
	double a[2];
	double b[2];
	double scalar[1];
	string name;
	void vectorone()
	{
		cout << "¬ведите координаты вектора a: " << endl;
		cout << "x1: ";
		cin >> a[0];
		cout << "y1: ";
		cin >> a[1];
	}

	void vectortwo()
	{
		cout << "¬ведите координаты вектора b: " << endl;
		cout << "x2: ";
		cin >> b[0];
		cout << "y2: ";
		cin >> b[1];
	}


	double result()
	{
		scalar[0] = (a[0] * b[0]) + (a[1] * b[1]);

		return 0;
	}


	double output()
	{
		cout << "—кал€рное произведение векторов: " << endl;
		cout << scalar[0] << endl;

		return 0;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	scalar vector;
	vector.vectorone();
	vector.vectortwo();
	vector.result();
	vector.output();


	return 0;

	system("pause");
}
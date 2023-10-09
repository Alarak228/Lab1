#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float num1;
	float num2;
	cout << "Введите значение 1 числа: ";
	cin >> num1;
	system("cls");
	cout << "Введите значение 2 числа: ";
	cin >> num2;
	system("cls");
	cout << "Среднее арифмитическое значение двух чисел равно:" << endl;
	cout << (num1 + num2) / 2;
	return 0;
}



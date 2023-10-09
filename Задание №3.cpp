#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num1, num2;
	int num3 = 0;
	cout << "Введите четное число начало: ";
	cin >> num1;
	system("cls");
	cout << "Введите четное число конец: ";
	cin >> num2;
	system("cls");
	for (num1 + (num1 % 2); num1 <= num2; num1 += 2) {
			num3 += num1;
	}  
	cout <<"Сумма четных чисел = "<<num3;
	return 0;
}



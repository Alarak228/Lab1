#include <iostream>
using namespace std;
int main()
{
 	setlocale(0, "");

	int num;
	cout << "Введите желаемое число: ";
	cin >> num;
	cout << "Число в квадрате: " << num * num << endl;
	cout << "Число в кубе: " << num * num*num << endl;
	return 0;
}

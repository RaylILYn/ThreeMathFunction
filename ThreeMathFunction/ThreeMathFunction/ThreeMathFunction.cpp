#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y;
	cout << "Введите значение X: ";
	cin >> x;
	if (x == -10)
	{
		y = 1 / x;
		cout << "Формула 3" << endl;
	}
	else {
		if (x <= 0)
		{
			y = pow(x, 2);
			cout << "Формула 1 " << endl;
		}
		else {
			if (x > 1)
			{
				y = sqrt(x + 1);
				cout << "Формула 2" << endl;
			}
			else {
				y = 1 / x;
				cout << "Формула 3" << endl;
			}
		}
	}
	cout.precision(5);
	cout << "Функция Y равна: " << y << endl << endl;
	system("pause");
}
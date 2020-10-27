#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float x, y;
	cout << "Введите координаты точки\n";
	cin >> x >> y;
	if ((y >= 0) && (y <= 1) && (x >= -1) && (x <= 1))
	{
		if ((y - abs(x)) >= 0)
			cout << "Данная точка принадлежит заштрихованной части\n";
		else
			cout << "Данная точка не принадлежит заштрихованной части\n";
	}
else
		cout << "Данная точка не принадлежит заштрихованной части\n";
	system("pause");
	return 0;


}


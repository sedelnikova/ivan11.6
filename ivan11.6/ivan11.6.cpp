// ivan 11.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.

#include <iostream>
#include <cmath>
using namespace std;

int f(int n) {
	int a = 1, b = 1, c = 1;
	int res = 2;

	while (c < n)
	{
		c = a + b;
		res++;
		a = b;
		b = c;
	}
	if (c > n) {
		return 0;
	}
	else {
		return res;
	}
}

int main()
{
	int n;
	cin >> n;
	if (n > 1) {
		int result = f(n);
		if (result != 0) {
			cout << result << endl;
		}
		else {
			cout << "неверные данные" << endl;
		}
	}
	else {
		cout << "неверные данные" << endl;
	}
	return 0;
}
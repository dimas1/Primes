#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите N: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "[X] Введите положительное число N: ";
		cin >> n;
	}
	cout << "Введите " << n << " целых чисел" << endl;
	int a, min,
		mod3 = 0,
		proizvedenie = 1,
		primes = 0;
	for (int i = 0, j; i < n; i++)
	{
		cin >> a;
		if (a % 3 == 0) mod3++;
		if (a > 0) proizvedenie *= a;
		if (a >= 2) {
			for (j = 2; (j < a) && (a % j != 0); j++)
				;
			if (a == j) primes++;
		}
		if ((i == 0) || (min > a)) min = a;
	}
	cout << "Количество чисел кратных 3 = " << mod3 << endl;
	cout << "Произведение неотрицательных чисел = " << proizvedenie << endl;
	cout << "Количество простых чисел = " << primes << endl;
	cout << "Минимальное число = " << min << endl;
}

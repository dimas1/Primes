#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(0, "");
	int n, a, kol = 0;
	cout << "Введите количество членов: ";
	cin >> n;
	if (n <= 0) {
		cout << "Вы ввели неверное значение!";
		_getch();
		exit(0);
	}
	for (int i = 1, j; i <= n; i++) {
		cout << "Введите " << i << " член: ";
		cin >> a;
		if (a >= 2) {
			bool isPrime = true;
			for (j = 2; j < a; j++) {
				if (a%j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime == true) kol++;
		}
	}
	cout << "\nКоличество простых чисел: " << kol << endl;
	_getch();
}

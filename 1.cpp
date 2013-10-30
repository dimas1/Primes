#include <iostream>
using namespace std;

void main()
{
	int n;
	cout << "Введите N: ";
	cin >> n;
	cout << "Введите " << n << " целых чисел" << endl;
	int a, primes = 0;
	for (int i = 0, j; i < n; i++) {
		cin >> a;
		if (a >= 2) {
			for (j = 2; j < a; j++) { if (a % j == 0) break; }
			if (a == j) primes++;
		}
	}
	cout << "Количество простых чисел = " << primes << endl;
}

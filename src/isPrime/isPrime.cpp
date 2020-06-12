#include <iostream>
#include "isPrime.h"

int mpow(int b, int e, int m) {
	int x = 1;
	while (e > 0) {
		if (e % 2)
        	x = (x * b) % m;
		b = (b * b) % m;
		e /= 2;
	}
	return x % m;
}

bool isPrime(int n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
		
	int s = n - 1;
	while (s % 2 == 0)
		s /= 2;
		
	for (int i = 0; i < 10; i++) {
		int temp = s;
		int a = rand() % (n - 1) + 1;
		int mod = mpow(a, temp, n);
		while (temp != n-1 && mod != 1 && mod != n-1) {
			mod = (mod * mod) % n;
			temp *= 2;
		}
		if (mod !=n-1 && temp % 2 == 0)
			return false;
	}
	return true;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        isPrime(1610612741);
        std::cout << i + 1 << std::endl;
    }
}

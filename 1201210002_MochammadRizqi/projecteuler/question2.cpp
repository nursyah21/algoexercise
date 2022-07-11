#include <iostream>
using namespace std;

int sum(int n);
int fib(int n);

const int N = 4000000;

int main() {
  int i = 2;
	cout << sum(i);
	return 0;
}

int sum(int n) {
	int sum = 0; // suma de los terminos pares
	while (fib(n) < N) {
		if (fib(n)%2==0) {
			sum += fib(n);
		}
		n++;
	}
	return sum;
}
int fib(int n) {

	int a = 0; // anterior
	int b = 1; // posterior
	int c = 0; // suma de a+b
	int i = 1; // contador

	while (i <= n) {
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	return c;
}
#include <iostream>
using namespace std;

const unsigned NUM = 10;
typedef unsigned TNumbers[NUM];

unsigned checkDivisors(unsigned i);

int main() {

  for (unsigned i = 20; i==i; i += 20) {

	   if (checkDivisors(i)==NUM) {

		  cout << i;

		  return 0;
	   }

   }

   return 0;
}

unsigned checkDivisors(unsigned i) {

	TNumbers div = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	unsigned c = 0;

	for (unsigned j = 0; j < NUM; j++) {

		if (i%div[j]==0) c++;
	}

	return c;
}
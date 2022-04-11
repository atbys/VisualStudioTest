#include <stdio.h>

int sub(int a, int b) {
	return a - b;
}

int add(int a, int b) {
	return a + b;
}

int main() {
	printf("1 + 1 = %d\n", add(1, 1));

	return 0;
}
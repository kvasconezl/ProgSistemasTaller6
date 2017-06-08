#include <stdio.h>

void intercambiar(int *a, int *b) {
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}


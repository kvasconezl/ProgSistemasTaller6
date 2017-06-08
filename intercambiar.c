#include <stdio.h>

void intercambiar(int *a, int *b) {
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}


int main(){
	int a = 2;
	int b = 3;
	
	intercambiar(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}

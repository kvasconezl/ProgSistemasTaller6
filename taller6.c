#include <stdio.h>

void desglosar(char * fecha){
	printf("Dia: %c%c \nMes: %c%c \nAño: %c%c%c%c\n", *(fecha + 8),*(fecha + 9),*(fecha + 5),*(fecha + 6),*(fecha),*(fecha + 1),*(fecha + 2),*(fecha +3) );
}

int* busqueda(int * arreglo, int numero, int tamanio){
	int * puntero;
	int i;
	for (i = 0; i < tamanio; i++){
		if (arreglo[i] == numero){
			puntero = (arreglo + i);
			return puntero;
		}
	}
	return 0;
}


void intercambiar(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}


int main(void){
	int a = 2;
	int b = 3;
	desglosar("2017-06-06");
	int arreglo[10]={0,2,3,5,5,6,7,8,9,0};
	printf("Puntero %x", busqueda(arreglo,5,10));
	intercambiar(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}


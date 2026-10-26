#include <stdio.h>

int main(void) {
	// declarando un número entero llamado "num" al que se le asigna el valor 15.
	int num = 15;
	// declarando un puntero entero llamado "pnum" al que se le asigna la dirección de memoria de num.
	int *pnum = &num;
	// declarando un número entero llamado "n" al que se le asigna el valor de la variable al que apunta el puntero, en formato hexadecimal.
	int n = *pnum;

	// imprimiendo la dirección de memoria del puntero. 
	printf("%p\n", &num); 
  
	// imprimiendo el valor al que apunta el puntero, en hexadecimal, 0xf == 15.
	printf("%p\n", *pnum);
	printf("%p\n", n);

	return 0;
}

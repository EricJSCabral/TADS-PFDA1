#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s
	int a;
	
	printf ("digite um n�mero: ");
	scanf ("%i", &a);
	
	if (a%3 == 0 && a%5 == 0) {
		printf ("Este n�mero � multiplo de 3 e de 5");
	}
	
	else {
		printf ("Este n�mero N�O � multiplo de 3 e de 5");
	}

	
}

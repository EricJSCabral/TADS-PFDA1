#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português
	int a;
	
	printf ("digite um número: ");
	scanf ("%i", &a);
	
	if (a%3 == 0 && a%5 == 0) {
		printf ("Este número é multiplo de 3 e de 5");
	}
	
	else {
		printf ("Este número NÃO é multiplo de 3 e de 5");
	}

	
}

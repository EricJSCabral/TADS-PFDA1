#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>  //n

int main ()
{
		setlocale(LC_ALL, "portuguese"); 
		
		int numero;
		
		printf ("Digite um n�mero: ");
		scanf ("%i", &numero);
		
		if (numero%3 == 0 && numero > 0) {
			printf ("O n�mero � m�ltiplo de 3 e n�o � negativo!");
		}
		else {
			printf ("O n�mero N�O � multiplo de 3 e/ou � um n�mero negativo");
		}
		getch ();
	}

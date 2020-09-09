#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>  //n

int main ()
{
		setlocale(LC_ALL, "portuguese"); 
		
		int numero;
		
		printf ("Digite um número: ");
		scanf ("%i", &numero);
		
		if (numero%3 == 0 && numero > 0) {
			printf ("O número é múltiplo de 3 e não é negativo!");
		}
		else {
			printf ("O número NÃO é multiplo de 3 e/ou é um número negativo");
		}
		getch ();
	}

#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s 

	float numero, dobro, quadrado;
	
	printf ("Digite um n�mero:  ");
	scanf ("%f", &numero);
	
	dobro = numero * 2;
	quadrado = numero * numero;
	
	printf("O dobro do n�mero �: %.2f e o quadrado �: %.2f", dobro, quadrado);
	
	getch();
}

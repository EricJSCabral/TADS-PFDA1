#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 

	float numero, dobro, quadrado;
	
	printf ("Digite um número:  ");
	scanf ("%f", &numero);
	
	dobro = numero * 2;
	quadrado = numero * numero;
	
	printf("O dobro do número é: %.2f e o quadrado é: %.2f", dobro, quadrado);
	
	getch();
}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> //biblioteca matem�tica


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s 
	
	float base, expoente, resultado;
	
	printf ("digite a base: ");
	scanf("%f", &base);
	
	printf ("digite o expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);  //faz c�clculo de potencia��o
	
	printf ("O resultado �: %.2f", resultado);
	
	
	
	getch();
}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h> //biblioteca matemática


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	
	float base, expoente, resultado;
	
	printf ("digite a base: ");
	scanf("%f", &base);
	
	printf ("digite o expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);  //faz cáclculo de potenciação
	
	printf ("O resultado é: %.2f", resultado);
	
	
	
	getch();
}

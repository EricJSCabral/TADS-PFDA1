#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	
	float salario1, salario2;
	
	printf ("Digite o seu salário atual: ");
	scanf("%f", &salario1);
	
	salario2 = salario1 * 1.25;
	
	printf ("O seu salário com acréscimo de 25 será de: %.2f", salario2);
	

	
	getch();
}

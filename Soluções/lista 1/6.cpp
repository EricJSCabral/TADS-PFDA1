#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s 
	
	float salario1, salario2;
	
	printf ("Digite o seu sal�rio atual: ");
	scanf("%f", &salario1);
	
	salario2 = salario1 * 1.25;
	
	printf ("O seu sal�rio com acr�scimo de 25 ser� de: %.2f", salario2);
	

	
	getch();
}

#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	int nascimento, atual, idade, dias, semanas, meses;
	
	printf ("Digite o ano de seu nascimento: ");
	scanf("%i", &nascimento);
	
	printf ("Digite o ano atual: ");
	scanf ("%i", &atual);
	
	idade = atual - nascimento;
	meses = idade * 12;
	dias = idade * 365;
	semanas = idade *52;
	
	printf (" \nsua idade, em anos, é: %i \n \n", idade);
	printf ("sua idade, em meses, é: %i \n \n", meses);
	printf ("sua idade, em dias, é: %i \n \n", dias);
	printf ("sua idade, em semanas, é: %i", semanas);

	
	getch();
}

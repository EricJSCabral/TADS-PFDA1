#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s 
	int nascimento, atual, idade, dias, semanas, meses;
	
	printf ("Digite o ano de seu nascimento: ");
	scanf("%i", &nascimento);
	
	printf ("Digite o ano atual: ");
	scanf ("%i", &atual);
	
	idade = atual - nascimento;
	meses = idade * 12;
	dias = idade * 365;
	semanas = idade *52;
	
	printf (" \nsua idade, em anos, �: %i \n \n", idade);
	printf ("sua idade, em meses, �: %i \n \n", meses);
	printf ("sua idade, em dias, �: %i \n \n", dias);
	printf ("sua idade, em semanas, �: %i", semanas);

	
	getch();
}

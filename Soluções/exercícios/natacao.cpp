#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português
	
	int idade;
	
	printf("Digite a idade do participante: ");
	scanf("%i", &idade);
	
	switch (idade)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: 
			printf("Bebê");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10: 
			printf ("Infantil");
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15: 
			printf ("infanto-juvenil");
			break;
		case 16:
		case 17:
		case 18: 
			printf ("Adolescente");
			break;	
		default: printf ("IDADE INVÁLIDA");
	}
	getch ();
	}

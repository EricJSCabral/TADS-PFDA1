#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s
	
	int opcao;
	
	printf("SELECIONE SUA OP��O: \n");
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("3- Sair\n\n");
	scanf("%i", &opcao);
	
	switch (opcao)
	{
		case 1: printf("M�dulo cadastrar");
			break;
		case 2: printf ("M�dulo Listar");
			break;
		case 3: printf ("Saindo");
			break;
		default: printf ("Digite certo");
			break;
		
	}
	getch ();
	}

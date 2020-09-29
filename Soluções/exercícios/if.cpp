#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>  //n

void funcaoteste ()
{
print("Olá mundo");
}

int main ()
{
		setlocale(LC_ALL, "portuguese"); 
		
		int a, b, c;
		char nome[45];
		
		printf ("Digite o nome do aluno: ");
		scanf ("%s", &nome);
		
		printf ("Digite a primeira nota: ");
		scanf ("%i", &a);
		if (a > 10) {
			printf ("Nota inválida. Tente novamente!");
			exit (0);
		}
		
		printf ("Digite a segunda nota: ");
		scanf ("%i", &b);
		if (b > 10) {
		printf ("Nota inválida. Tente novamente!");
		exit (0);
		}
		
		printf ("Digite a terceira nota: ");
		scanf ("%i", &c);
		if (c > 10) {
			printf ("Nota inválida. Tente novamente!");
			exit (0);
		}
		
		float media = (a + b + c)/3;
		
		if (media <= 5)
		{
			printf ("A média é %.2f, o aluno %s foi reprovado", media, nome);
		}
		else 
		{
			printf ("A média é %.2f, o aluno %s foi aprovado", media, nome);
		} 
}

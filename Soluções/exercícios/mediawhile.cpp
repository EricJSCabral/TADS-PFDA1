#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h> 

//calcula a média de cada aluno em uma sala de 3 alunos
int main ()
{
		setlocale(LC_ALL, "portuguese"); 
		
		int i;
		float nota1, nota2, media;
		i = 0;
		while (i < 3 ) {
			
			printf ("Digite a primeira nota :");
			scanf ("%f", &nota1);
			printf ("Digite a segunda nota :");
			scanf ("%f", &nota2);
			
			media = (nota1+nota2)/2;
			
			printf ("A média aritimética é de: %.2f \n", media);
			i++;
		}
		getch ();
	}

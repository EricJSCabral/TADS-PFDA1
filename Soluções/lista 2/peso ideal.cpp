#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português
	
	int sexo;
	float altura, peso;
	
	printf ("digite sua altura em METROS: ");
	scanf ("%f", &altura);
	
	printf ("Escolha seu sexo: \n");
	printf ("1- Masculino \n");
	printf ("2- feminino \n");
	scanf ("%i", &sexo);
	
	switch (sexo) 
	{
	
	case 1:
	peso = 72.7 * altura - 58;
	printf ("\nO seu peso ideal é: %.2f", peso);
	break;
	case 2: 
		peso = 62.1 * altura - 44.7;
		printf ("\nO seu peso ideal é %.2f", peso);
		break;
	default: 
		printf ("\nResponda com 1 ou 2");
}
	
}
	

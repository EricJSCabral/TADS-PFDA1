#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	
	float altura, raio, volume;
	
	printf ("Digite a altura da lata em metros: ");
	scanf ("%f", &altura);
	
	printf ("Digite o raio da lata em metros:  ");
	scanf ("%f", &raio);
	
	volume = 3.14159 * (raio*raio) * altura;
	
	printf ("O volume da lata é: %.3f", volume);
	
	
	
	getch ();
}

#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	float c, f;
	
	printf ("Digite a temperatura em graus Celsius: ");
	scanf ("%f", &c);
	
	f = (c*1.8)+32;
	
	printf ("A temperatura em graus Fahrenheit é de: %.1f º", f);

	
	getch();
}

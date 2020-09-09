#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h> 

int main ()
{

 setlocale(LC_ALL, "Portuguese");
 
 	int numero, i;
 	
 	printf ("Digite um número:  ");
 	scanf ("%i", &numero);
 	
 	do {
 		printf ("%i x %i = %i \n", numero, i, numero*i);
 		i++;
	 }
	 while (i <= 10); 
	 
	 system ("pause");
}

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>  //n

int main ()
{
		setlocale(LC_ALL, "portuguese"); 
		
		int A, B;
		
		A = 0;
		B = 10;
		
		while (A <= B) {
			printf (" %i ", A);
			A++;
		}
		
	getch ();
		
	}
		

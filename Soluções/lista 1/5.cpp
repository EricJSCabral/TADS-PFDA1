#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma portugu�s 
	float bruto, desconto_prev, valor1, desconto_ir, liquido;
	
	printf ("Digite o sal�rio bruto: ");
	scanf ("%f", &bruto);
	
	desconto_prev = bruto * 0.085;      //calcula o desconto para a previd�ncia
	valor1 = bruto - desconto_prev;     //valor com o primeiro desconto 
	
	desconto_ir = valor1 * 0.275;     //calcula o desconto do IR em cima do valor j� descontado da previdencia
	
	liquido = valor1 - desconto_ir;

	
	
	printf ("O valor descontado da previd�ncia � de: %.2f \nO valor descontado do Imposto de Renda � de: %.2f \nO seu sal�rio l�quido �:  %.2f", desconto_prev, desconto_ir, liquido);
	
	getch();
}

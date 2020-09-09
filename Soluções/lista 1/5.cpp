#include <conio.h> //biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()

{
	setlocale(LC_ALL, "Portuguese"); //define idioma português 
	float bruto, desconto_prev, valor1, desconto_ir, liquido;
	
	printf ("Digite o salário bruto: ");
	scanf ("%f", &bruto);
	
	desconto_prev = bruto * 0.085;      //calcula o desconto para a previdência
	valor1 = bruto - desconto_prev;     //valor com o primeiro desconto 
	
	desconto_ir = valor1 * 0.275;     //calcula o desconto do IR em cima do valor já descontado da previdencia
	
	liquido = valor1 - desconto_ir;

	
	
	printf ("O valor descontado da previdência é de: %.2f \nO valor descontado do Imposto de Renda é de: %.2f \nO seu salário líquido é:  %.2f", desconto_prev, desconto_ir, liquido);
	
	getch();
}

#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>  


int main( ){
	
	setlocale(LC_ALL, "Portuguese");
	
	char a, b, c, d;
	
	printf ("Digite sua senha: ");
	a = getch();
	printf("*");
	b = getch();
	printf("*");
	c = getch();
	printf("*");
	d = getch();
	printf("*");
	
	if (a == '1' && b == '3' && c == '1' && d =='0') {
	char opcao;
	printf("===============\n");
	printf("Selecione a op��o desejada \n");
	printf("a = saldo \n");
	printf("b = dep�sito \n");
	printf("c = pagamentos \n");
	printf("d = transfer�ncias\n");
	printf("e = sair\n");
	printf("================\n");
	
	scanf ("%s", &opcao);
	
	switch (opcao){
		case 'A':
		case 'a': printf("Opera��o: saldo \n");
		break;
		case 'B':
		case 'b': printf("Opera��o: dep�sito \n");
		break;
		case 'C':
		case 'c': printf("Opera��o: pagamentos \n");
		break;
		case 'D':
		case 'd': printf("Opera��o: transf�rencias \n");
		break;
		case 'E':
		case 'e': printf("Encerrando opera��es \n");
		return 0;
		break;
		default: printf("OPERA��O INV�LIDA!! \n");
		return 0;
	}

}
else {
	printf ("SENHA INV�LIDA!!!");
}
getch ();
return 0;
}

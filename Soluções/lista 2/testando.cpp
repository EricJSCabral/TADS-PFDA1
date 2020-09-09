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
	printf("Selecione a opção desejada \n");
	printf("a = saldo \n");
	printf("b = depósito \n");
	printf("c = pagamentos \n");
	printf("d = transferências\n");
	printf("e = sair\n");
	printf("================\n");
	
	scanf ("%s", &opcao);
	
	switch (opcao){
		case 'A':
		case 'a': printf("Operação: saldo \n");
		break;
		case 'B':
		case 'b': printf("Operação: depósito \n");
		break;
		case 'C':
		case 'c': printf("Operação: pagamentos \n");
		break;
		case 'D':
		case 'd': printf("Operação: transfêrencias \n");
		break;
		case 'E':
		case 'e': printf("Encerrando operações \n");
		return 0;
		break;
		default: printf("OPERAÇÃO INVÁLIDA!! \n");
		return 0;
	}

}
else {
	printf ("SENHA INVÁLIDA!!!");
}
getch ();
return 0;
}

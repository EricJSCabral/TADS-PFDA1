#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main( ){
	
	setlocale(LC_ALL, "Portuguese");

char senha[5];
int i;
printf ("Digite a sua senha: ");

for (i=0;i<4;i++) {
    senha[i]=getch();
    putchar('*');
}




if (strcmp(senha, "1310") == 0) {
	char opcao;
	printf("\n===============\n");
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
	printf ("\nSENHA INVÁLIDA!!!\n");
}
getch ();
return 0;
}

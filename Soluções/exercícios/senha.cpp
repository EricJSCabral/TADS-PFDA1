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
	printf ("\nSENHA INV�LIDA!!!\n");
}
getch ();
return 0;
}

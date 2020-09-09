#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


int main( ){
	
	setlocale(LC_ALL, "Portuguese");

char senha[10];
int i=0, tentativa=0;

while (tentativa < 3) {

fflush(stdout);
printf ("Digite a sua senha: ");	
while (i < 11) {
    senha[i]=getch();
    printf("*");
    i++;
}

if (strcmp(senha, "iron maiden") == 0) {
	printf ("\n Acesso Vip");
	break;
}
else {
	printf (" \nBARRADO NA ENTRADA \n");
	tentativa++;
	getch();
} 
}

}


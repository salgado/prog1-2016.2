#include <stdio.h>
/*
Fa�a um programa em C para ler um 
n�mero inteiro e dizer se este � par ou �mpar.
*/

int main()
{
	int num;
	
	printf("\nEntre com numero:");
	scanf("%d", &num);
	
	if( (num%2)==0 )
	{ //condicao verdadeira
		printf("\nNumero par !!");
	}
	else
	{ //condicao falsa
		printf("\nNumero impar !!");
	}
	return 0;
}

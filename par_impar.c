#include <stdio.h>
/*
Faça um programa em C para ler um 
número inteiro e dizer se este é par ou ímpar.
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

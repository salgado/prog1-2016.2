#include <stdio.h>

int main()
{
	int idade;
	
	printf("\nEntre com sua idade:");
	scanf("%d", &idade);
	
	if(idade>=18)
	{
		printf("\nVoce pode dirigir.");
	}
	else
	{
		printf("\nVoce NAO pode dirigir.");
	}
	
	return 0;
}

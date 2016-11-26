#include <stdio.h>

int main()
{
  int numero;
  int i=0, resto, result, j;
  int bin[10];
  
  printf("\nEntre com um numero:");
  scanf("%d", &numero);
  
  do
  {
    result = numero / 2;
    resto = numero % 2;
    bin[i] = resto;
    i++;
    numero = result;
  }while(result != 1);
  bin[i] = 1; //ultimo digito
  
  printf("\nConvertido para binario = ");
  for(j=i; j>=0 ; j--)
  {
    printf("%d", bin[j]);
  }
  
  printf("\n");
  
  return 0;
}
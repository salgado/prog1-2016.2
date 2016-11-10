#include <stdio.h>

int main()
{
  char letra;
  
  printf("\nEntre com uma letra:");
  scanf("%c", &letra);
  
  if(  (letra>=65) && (letra<=90) )
  {
    printf("\nLetra Maiuscula!!\n");
  }
  else if((letra>=48) && (letra<=57) )
  {
    printf("\nVoce digitou um numero!!\n");
  }
  else if(  (letra>=97) && (letra<=122) )
  {
    printf("\nLetra Minuscula!!\n");
  }
  
  return 0;
}
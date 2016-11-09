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
  else
  {
    printf("\nLetra Minuscula!!\n");
  }
  
  return 0;
}
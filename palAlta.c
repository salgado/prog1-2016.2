#include <stdio.h>
#include <string.h>

int main()
{
   char palavra[20];
   int i, tam;
   
   printf("\nEntre com uma palavra:");
   scanf("%s", palavra);
  
   tam = strlen(palavra);
  
   printf("\n palavra caixa alta: ");
  
   for(i=0; i<tam; i++)
   {
     printf("%c", palavra[i]-32);
   }
  
   printf("\n");
  
   return 0;
   
}
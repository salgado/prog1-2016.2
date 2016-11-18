#include <stdio.h>

int main()
{
  float soma=0, media;
  float av1[10];
  int i;
  
  for(i=0;i<=9;i++)
  {
    printf("\nEntre com a AV1 do Aluno %d: ", i+1);
    scanf("%f", &av1[i]);
    soma = soma + av1[i];
  }
  media = soma / 10;
  printf("\nMedia = %f \n", media);

  printf("\n------------------------");
  printf("\nAlunos com nota >= media");
  for(i=0;i<=9;i++)
  {
    if(av1[i] >= media)
    {
      printf("\nAluno %d -> Nota = %f", i+1, av1[i]);
    }
  }
  
  return 0;
}
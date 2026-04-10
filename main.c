#include <stdio.h>

int main()
{
  int i;

  printf("\nTorre\nDireção: Direita\n");
  for (i = 1; i <= 5; i++)
  {
    printf("Casa: %d\n", i);
  }

  printf("\nBispo\nDireção: Cima, Direita\n");
  i = 1;
  while (i <= 5)
  {
    printf("Casa: %d\n", i);
    i++;
  }

  printf("\nRainha\nDireção: Esquerda\n");
  i = 1;
  do
  {
    printf("Casa: %d\n", i);
    i++;
  } while (i <= 8);

  return 0;
}
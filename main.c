#include <stdio.h>

int main()
{
  int i, j;
  int movimentoTorre = 5;
  int movimentoBispo = 5;
  int movimentoRainha = 8;
  int movimentoCavalo = 3;

  // Movimento da Torre: A torre se move em linha reta, ou seja, ela pode se mover para cima, para baixo, para a direita ou para a esquerda. Para simular isso, podemos usar um loop para representar os movimentos horizontais e verticais da torre.
  printf("\nTorre\n");
  for (int i = 1; i <= movimentoTorre; i++)
  {
    printf("Casa: %d - Direita\n", i);
  }

  // Movimento do Bispo: O bispo se move em diagonal, ou seja, ele pode se mover para cima e para a direita, para cima e para a esquerda, para baixo e para a direita, ou para baixo e para a esquerda. Para simular isso, podemos usar um loop para representar os movimentos diagonais do bispo.
  printf("\nBispo\n");
  i = 1;
  while (i <= movimentoBispo)
  {
    printf("Casa: %d - Cima, Direita\n", i);
    i++;
  }

  // Movimento da Rainha: A rainha pode se mover em qualquer direção (horizontal, vertical ou diagonal) por um número ilimitado de casas. Para simular isso, podemos usar um loop para representar os movimentos horizontais e verticais da rainha, e outro loop para representar os movimentos diagonais.
  printf("\nRainha\n");
  i = 1;
  do
  {
    printf("Casa: %d - Esquerda\n", i);
    i++;
  } while (i <= movimentoRainha);

  // Movimento do Cavalo: O cavalo se move em um padrão de "L", ou seja, ele pode se mover duas casas em uma direção (horizontal ou vertical) e depois uma casa em uma direção perpendicular. Para simular isso, podemos usar dois loops aninhados para representar os movimentos horizontais e verticais do cavalo.
  printf("\nCavalo\n");
  for (i = 3; i <= movimentoCavalo; i++)
  {
    printf("Casa: %d - Esquerda\n", i);
    j = 1;
    while (j < movimentoCavalo)
    {
      printf("Casa: %d - Baixo\n", j);
      j++;
    }
  }

  return 0;
}
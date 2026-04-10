#include <stdio.h>

void imprimirMovimentosTorre(int movimentoTorre)
{
  if (movimentoTorre > 0)
  {
    printf("Movimento da Torre: Direita\n");
    imprimirMovimentosTorre(movimentoTorre - 1);
  }
}

void imprimirMovimentosBispo(int movimentoBispo)
{
  if (movimentoBispo > 0)
  {
    printf("Movimento do Bispo: Cima, Direita\n");
    imprimirMovimentosBispo(movimentoBispo - 1);
  }
}

void imprimirMovimentosRainha(int movimentoRainha)
{
  if (movimentoRainha > 0)
  {
    printf("Movimento da Rainha: Esquerda\n");
    imprimirMovimentosRainha(movimentoRainha - 1);
  }
}

int main()
{
  int movimentoTorre = 5;
  int movimentoBispo = 5;
  int movimentoRainha = 8;
  int movimentoCavalo = 3;

  // Movimento da Torre: A torre se move em linha reta, ou seja, ela pode se mover para cima, para baixo, para a direita ou para a esquerda. Para simular isso, podemos usar um loop para representar os movimentos horizontais e verticais da torre.
  printf("Torre\n");
  imprimirMovimentosTorre(movimentoTorre);

  // Movimento do Bispo: O bispo se move em diagonal, ou seja, ele pode se mover para cima e para a direita, para cima e para a esquerda, para baixo e para a direita, ou para baixo e para a esquerda. Para simular isso, podemos usar um loop para representar os movimentos diagonais do bispo.
  printf("\nBispo\n");
  imprimirMovimentosBispo(movimentoBispo);

  // Movimento da Rainha: A rainha pode se mover em qualquer direção (horizontal, vertical ou diagonal) por um número ilimitado de casas. Para simular isso, podemos usar um loop para representar os movimentos horizontais e verticais da rainha, e outro loop para representar os movimentos diagonais.
  printf("\nRainha\n");
  imprimirMovimentosRainha(movimentoRainha);

  // Movimento do Cavalo: O cavalo se move em um padrão de "L", ou seja, ele pode se mover duas casas em uma direção (horizontal ou vertical) e depois uma casa em uma direção perpendicular. Para simular isso, podemos usar dois loops aninhados para representar os movimentos horizontais e verticais do cavalo.
  printf("\nCavalo\n");
  for (int i = 1, j = 1; i < movimentoCavalo || j == movimentoCavalo; i++, j++)
  {
    if (i < movimentoCavalo)
    {
      printf("Cima\n");
    }
    else if (j == movimentoCavalo)
    {
      printf("Direita\n");
    }
    else
    {
      break;
    }
  }

  return 0;
}
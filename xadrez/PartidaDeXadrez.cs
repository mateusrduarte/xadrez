using System;
using tabuleiro;

namespace xadrez
{
    class PartidaDeXadrez
    {
        public Tabuleiro tabuleiro { get; private set; }
        private int turno;
        private Cor JogadorAtual;
        public bool terminada { get; private set; }

        public PartidaDeXadrez()
        {
            tabuleiro = new Tabuleiro(8, 8);
            turno = 1;
            JogadorAtual = Cor.Branca;
            colocarPecas();
            terminada = false;
        }

        public void executarMovimento (Posicao origem, Posicao destino)
        {
            Peca p = tabuleiro.retirarPeca(origem);
            p.incrementarQuantidadeDeMovimentos();
            Peca pecaCapturada = tabuleiro.retirarPeca(destino);
            tabuleiro.colocarPeca(p, destino);
        }

        private void colocarPecas()
        {
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Branca), new PosicaoXadrez('c', 1).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Branca), new PosicaoXadrez('c', 2).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Branca), new PosicaoXadrez('d', 2).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Branca), new PosicaoXadrez('e', 2).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Branca), new PosicaoXadrez('e', 1).GetPosicao());
            tabuleiro.colocarPeca(new Rei(tabuleiro, Cor.Branca), new PosicaoXadrez('d', 1).GetPosicao());

            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Preta), new PosicaoXadrez('c', 7).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Preta), new PosicaoXadrez('c', 8).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Preta), new PosicaoXadrez('d', 7).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Preta), new PosicaoXadrez('e', 7).GetPosicao());
            tabuleiro.colocarPeca(new Torre(tabuleiro, Cor.Preta), new PosicaoXadrez('e', 8).GetPosicao());
            tabuleiro.colocarPeca(new Rei(tabuleiro, Cor.Preta), new PosicaoXadrez('d', 8).GetPosicao());
        }
    }
}

#include <stdio.h>

int verify_pos(char board[10][10], int x, int y, int dir, int size, int giveFeedback)
{
    if (x < 0 || x >= 10 || y < 0 || y >= 10)
    {
        if (giveFeedback == 0)
            printf("As coordenadas inseridas estão fora do tabuleiro.\n");

        return 1;
    }

    if (dir == 'h')
    {
        for (int i = x; i < x + size; i++)
        {
            if (board[i][y] != '#')
            {
                if (giveFeedback == 0)
                    printf("As coordenadas inseridas colidem com outro navio.\n");

                return 1;
            }
        }
    }
    else if (dir == 'v')
    {
        for (int i = y; i < y + size; i++)
        {
            if (board[x][i] != '#')
            {
                if (giveFeedback == 0)
                    printf("As coordenadas inseridas colidem com outro navio.\n");
                return 1;
            }
        }
    }

    return 0;
}
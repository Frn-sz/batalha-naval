#include <stdio.h>

void visualize_enemy_board(char board[10][10])
{

    printf("    A  B  C  D  E  F  G  H  I  J \n   -----------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d |", i);
        for (int j = 0; j < 10; j++)
        {
            if (board[i][j] == 'x')
            {

                printf(" . ");
            }
            else
            {
                printf(" %c ", board[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n\n");
}
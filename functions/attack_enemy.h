#include <stdio.h>
#include "verify_hit.h"

void attack_enemy(char enemyBoard[10][10], int x, int y)
{
    if (verify_hit(enemyBoard, x, y) == 0)
    {
        if (enemyBoard[x][y] == 'x')
        {
            printf("Ataque acertou um navio!\n");
            enemyBoard[x][y] = 'o';
        }
        else if (enemyBoard[x][y] == 'o')
        {
            printf("Já atacou essa posição antes.\n");
        }
        else
        {
            printf("Ataque foi um miss.\n");
        }
    }
}
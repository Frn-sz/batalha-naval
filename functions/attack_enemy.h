#include <stdio.h>
#include "verify_hit.h"
#include "visualizy_enemy_board.h"
void attack_enemy(char enemyBoard[10][10], int x, int y)
{
    if (verify_hit(enemyBoard, x, y) == 0)
    {
        if (enemyBoard[x][y] == 'x')
        {
            printf("<------ Você acertou um navio inimigo! ------> \n\n\n");
            enemyBoard[x][y] = 'o';
        }
        else if (enemyBoard[x][y] == 'o')
        {
            printf("<------ Você já atacou essa posição antes ------> \n\n\n");
        }
        else
        {
            enemyBoard[x][y] = '#';
            printf("<------ Você errou seu ataque ------> \n\n\n");
        }
    }

    visualize_enemy_board(enemyBoard);
}
#define N_NAVIOS 5

#include "functions/verify_pos.h"
#include "functions/place_ship.h"
#include "functions/print_board.h"
#include "functions/init_board.h"
#include "functions/enemy_ships.h"
#include "functions/attack_enemy.h"
#include "functions/verify_win.h"
#include "functions/enemy_attack.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char playerBoard[10][10];
    char enemyBoard[10][10];

    init_board(playerBoard);
    init_board(enemyBoard);

    print_board(playerBoard);

    int x, y, ship_size, giveFeedback = 0;
    char dir;
    int win = 0;

    for (int i = N_NAVIOS; i > 1; i--)
    {
        ship_size = i;
        printf("Digite as coordenadas que deseja colocar seu navio de tamanho = %d \n", i);

        scanf("%d %d", &x, &y);

        printf("Digite qual direção deseja colocar o navio (h = Horizontal e v = vertical): \n");

        scanf(" %c", &dir);

        if (verify_pos(playerBoard, x, y, dir, ship_size, giveFeedback) == 0)
        {
            printf("\ec\e[3J");
            place_ship(playerBoard, x, y, dir, ship_size);
            printf("Seu Tabuleiro: \n");
            print_board(playerBoard);
        }
        else
        {
            i++;
        }
    }
    giveFeedback = 1;
    place_enemy_ships(enemyBoard, giveFeedback);

    while (win == 0)
    {
        printf("Digite as coordenadas para atacar o inimigo: \n");
        scanf("%d %d", &x, &y);

        printf("\ec\e[3J");

        attack_enemy(enemyBoard, x, y);

        verify_win(&win, enemyBoard);

        if (win == 1)
        {
            printf("Parabéns, você venceu! \n");
            break;
        }

        enemy_attack(playerBoard);

        verify_win(&win, playerBoard);

        printf("Seu Tabuleiro: \n");
        print_board(playerBoard);

        if (win == 1)
        {
            printf("Que pena, você perdeu :( \n");
            break;
        }
    }
    print_board(enemyBoard);
    printf("Obrigado por jogar! \n");
    return 0;
}

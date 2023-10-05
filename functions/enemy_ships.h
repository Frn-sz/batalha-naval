#define N_NAVIOS 5
#include <stdlib.h>
#include <time.h>

void random_coordinates(int *x, int *y, int size)
{
    *x = rand() % (10 - size + 1);
    *y = rand() % (10 - size + 1);
}

void place_enemy_ships(char board[10][10], int giveFeedback)
{
    int ship_size;
    char dir;
    int x, y;

    srand(time(NULL));

    for (int i = N_NAVIOS; i > 1; i--)
    {
        ship_size = i;

        dir = rand() % 2 == 0 ? 'h' : 'v';

        random_coordinates(&x, &y, ship_size);

        if (verify_pos(board, x, y, dir, ship_size, giveFeedback) == 0)
        {
            place_ship(board, x, y, dir, ship_size);
        }
        else
        {
            i++;
        }
    }
}
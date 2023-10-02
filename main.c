#define N_NAVIOS 5
#include <functions/ask_pos.h>;
#include <stdio.h>;

int main(int argc, char const *argv[])
{
    int board[20][10] = {0};

    int player = 0;
    int win = 0;

    while (win == 0)
    {
        for (int i = N_NAVIOS; i > 2; i--)
        {
            printf("Digite as coordenadas que deseja colocar seu navio de tamanho = %d \n", i - 1);
            ask_pos(&player, &board);
        }
    }
    return 0;
}

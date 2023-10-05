

void enemy_attack(char board[10][10])
{
    int x = rand() % 10;
    int y = rand() % 10;

    if (verify_hit(board, x, y) == 0)
    {
        if (board[x][y] == 'x')
        {
            printf("Seu navio foi acertado!\n");
            board[x][y] = 'o';
        }
        else
        {
            printf("O inimigo errou!.\n");
        }
    }
}

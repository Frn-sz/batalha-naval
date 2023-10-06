

void enemy_attack(char board[10][10])
{
    int goodAttack = 0;
    int x, y;
    while (goodAttack == 0)
    {
        x = rand() % 10;
        y = rand() % 10;

        if (verify_hit(board, x, y) == 0)
        {
            if (board[x][y] != '#' && board[x][y] != 'o')
            {
                if (board[x][y] == 'x')
                {
                    printf("<------ O inimigo acertou seu navio ------>\n\n\n");
                    board[x][y] = 'o';
                }
                else if (board[x][y] == '.')
                {
                    board[x][y] = '#';
                    printf("<------ O inimigo errou ------> \n\n\n");
                }
                goodAttack = 1;
                print_board(board);
                break;
            }
        }
    }
}

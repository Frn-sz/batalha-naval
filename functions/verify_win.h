void verify_win(int *win, char board[10][10])
{
    int endgame = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (board[i][j] == 'x')
            {
                endgame = 1;
            }
        }
    }

    if (endgame == 0)
    {
        *win = 1;
    }
}
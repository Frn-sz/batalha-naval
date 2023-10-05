int place_ship(char board[10][10], int x, int y, int dir, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (dir == 'h')
        {
            board[x][y + i] = 'x';
        }
        else if (dir == 'v')
        {
            board[x + i][y] = 'x';
        }
    }

    return 1;
}
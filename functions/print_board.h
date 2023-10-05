void print_board(char board[10][10])
{

        printf("  A  B  C  D  E  F  G  H  I  J \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 10; j++)
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}
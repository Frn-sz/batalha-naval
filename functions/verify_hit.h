int verify_hit(char board[10][10], int x, int y)
{

    if (x < 0 || x >= 10 || y < 0 || y >= 20)
    {
        printf("Coordenadas de ataque inválidas.\n");
        return 1;
    }

    return 0;
}
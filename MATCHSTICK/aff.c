/*
** EPITECH PROJECT, 2021
** print
** File description:
** print_board
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int my_isnum(char *str);

char **print_game_board(int line);

int input(char **ana, int nb, int max);

char **stars(char **ana, int line)
{
    int i = 0, j = 0;
    for (i = 0; i < line * 2 + 1; i++)
        printf("*");
    printf("\n");
    for (i = 0; i < line; i++)
    {
        printf("*");
        for (j = 0; j < (2 * line - 1); j++)
        {
            printf("%c", ana[i][j]);
        }
        printf("*");
        printf("\n");
    }
    for (i = 0; i < (2 * line + 1); i++)
        printf("*");
    printf("\n");
    return (ana);
}

char **remove_m(char **ana, int line, int match, int n)
{
    int i = 0;

    for (; ana[line][i] != '\0'; i++)
        ;
    for (int b = 0; i != 0 && b < match; i--)
    {
        if (ana[line][i] == '|')
        {
            ana[line][i] = ' ';
            b++;
        }
    }
    stars(ana, n);
    /*for (int i = 0; ana[i] != NULL; i++)
    {
        for (int j = 0; j < (n + 4); j++)
            printf("%c", ana[i][j]);
        printf("\n");
    }*/
}

int main(int argc, char **argv)
{

    int nb = atoi(argv[1]);
    int max = atoi(argv[2]);
    char **ana = calloc((nb * 2), sizeof(char *));
    ana = print_game_board(nb);
    while (1) {
    input(ana, nb, max);
    }
    //ana = remove_m(ana, line, match, nb);
    /*   int line = atoi(argv[1]);
    if (line < 0)
    printf("Invalid input");
    else
    print_game_board(line);*/
}
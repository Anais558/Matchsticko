/*
** EPITECH PROJECT, 2020
** isnum.c
** File description:
** isnum
*/
#include <stdio.h>
#include <stdlib.h>

char **remove_m(char **ana, int line, int match, int n);

int my_isnum(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] != '-' && str[i] < '0') ||
        (str[i] > '9' && str[i] != '.')) {
            printf("invalid argument\n");
            exit(84);} else
            return (0);
    }
    return (0);
}

char **print_game_board(int line)
{
    int i = 0;
    int j = 0;
    char **ana = malloc(sizeof(char *) * (line * 2));

    for (i = 0; i < line; i++)
    {
        ana[i] = malloc(sizeof(char) * (line * 2));
        for (j = 0; j < (2 * line); j++)
        {
            if (j <= line - 2 - i || j >= line + i)
                ana[i][j] = ' ';
            else
                ana[i][j] = '|';
        }
    }
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
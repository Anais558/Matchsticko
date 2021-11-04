/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** create a directory
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char **remove_m(char **ana, int line, int match, int n);

void my_putchar(char c)
{
    write(1, &c, 1);
}

int input(char **ana, int n, int max)
{
    size_t siz = 0;
    char *str = NULL;
    char *tmp = NULL;
    int i = 0;
    int j = 0;

    str = malloc(sizeof(char) * siz);
    printf("Your turn :\n");
    printf("Line: ");
    getline(&str, &siz, stdin);
    i = atoi(str)-1;
    printf("Matches: ");
    getline(&str, &siz, stdin);
    printf("Player removed ");
    j = atoi(str);
    if (j > max) {
        printf("Error: you cannot remove more than 5 matches per turn\n");
        str = malloc(sizeof(char) * siz);
        printf("Your turn :\n");
        printf("Line: ");
        getline(&str, &siz, stdin);
        i = atoi(str)-1;
        printf("Matches: ");
        getline(&str, &siz, stdin);
        printf("Player removed ");
        j = atoi(str);
    }
    printf("%d", j);
    printf(" match(es) from line ");
    printf("%d\n", i+1);
    my_putchar('\n');
    remove_m(ana, i, j, n);
    printf(" AI's turn...\n");
    printf("AI removed ");
    printf("%d", j+1);
    printf(" match(es) from line ");
    printf("%d\n", i+1);
    remove_m(ana, i, j+1, n);
    free(str);
}
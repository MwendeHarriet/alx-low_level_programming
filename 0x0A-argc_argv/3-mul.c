#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int i, d, n, len, f, digit;
    
    i = 0;
    d = 0;
    n = 0;
    len = 0;
    f = 0;
    digit = 0;

    while (s[len] != '\0')
        len++;

    while (i < len && f == 0)
    {
        if (s[i] == '-')
            ++d;

        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';

            if (d % 2)
                digit = -digit;

            n = n * 10 + digit;
            f = 1;

            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;

            f = 0;
        }

        i++;
    }

    return (n);
}

/**
 * main - multiplies two numbers and stores
 * result in an integer
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int x, y, result;

    if (argc != 3)
    {
        printf("%s\n", "Error");
        return (1);
    }

    x = _atoi(argv[1]);
    y = _atoi(argv[2]);
    result = x * y;

    printf("%d\n", result);
    return (0);
}

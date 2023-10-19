#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
    int i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    i++;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z')
            && (str[i - 1] == ' '
                || str[i - 1] == '\t'
                || str[i - 1] == '\n'
                || str[i - 1] == ','
                || str[i - 1] == ';'
                || str[i - 1] == '.'
                || str[i - 1] == '!'
                || str[i - 1] == '?'
                || str[i - 1] == '"'
                || str[i - 1] == '('
                || str[i - 1] == ')'
                || str[i - 1] == '{'
                || str[i - 1] == '}'))
            str[i] -= 32;
        i++;
    }
    return (str);
}

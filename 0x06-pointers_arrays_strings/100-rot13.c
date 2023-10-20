#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; input[j] != '\0'; j++)
        {
            if (str[i] == input[j])
            {
                str[i] = output[j];
                break;
            }
        }
    }

    return (str);
}

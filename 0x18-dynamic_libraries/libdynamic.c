#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
    return (_islower(c) || (_isupper(c)));
}


/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
        {
            len++;
            s++;
        }
        return (len);
}

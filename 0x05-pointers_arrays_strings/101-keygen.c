#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[65] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int sum = 2772;  /* Sum required by 101-crackme */
    int rand_num, i;

    srand(time(0));

    while (sum > 122)
    {
        rand_num = (rand() % 62);
        putchar(password[rand_num]);
        sum -= (rand_num + 1);
    }

    putchar(sum);

    return (0);
}

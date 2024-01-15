/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to print
 *
 * Return: On success, the number of characters written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

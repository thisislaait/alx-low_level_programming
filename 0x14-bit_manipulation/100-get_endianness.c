/**
 * get_endianness - Checks the endianness of a system
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
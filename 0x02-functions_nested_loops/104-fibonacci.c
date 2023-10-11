#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	unsigned long a = 1;
        unsigned long b = 1;
   	unsigned long c;

    	printf("%lu, %lu, ", a, b);
    	while (counter < 98)
    	{
        	c = a + b;
       		printf("%lu", c);
        	a = b;
        	b = c;
        	if (counter < 97)
			printf(", ");
		}
		counter++;
	}
	printf("\n");
	return (0);
}

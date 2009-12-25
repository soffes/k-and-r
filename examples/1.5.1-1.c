// Section 1.5.1 Example 1 from page 16

#include <stdio.h>

/* copy input to output; 1st version */
main()
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

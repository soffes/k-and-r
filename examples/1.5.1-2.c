// Section 1.5.1 Example 2 from page 17

#include <stdio.h>

/* copy input to output; 1st version */
main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}

// Section 1.5.2 Example 1 from page 18

#include <stdio.h>

/* count characters in input; 1st version */
main()
{
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

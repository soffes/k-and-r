// Exercise 1-10 from page 20
// Write a program to copy its input to its output, replacing each tab by a
// `\t`, each backspace by a `\b`, and each backslash by a `\\`. This makes the
// tabs and backspaces visible in an unambiguous way.


#include <stdio.h>

main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\");
		else
			putchar(c);
	}
}

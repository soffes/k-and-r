// Exercise 1-9 from page 20
// Write a program to copy its input to its output, replacing each string of
// one or more blanks by a single blank.

#include <stdio.h>

main() {
	int c, previous;
	
	while ((c = getchar()) != EOF) {
		if (!(previous == ' ' && c == ' ')) {
			putchar(c);
		}
		previous = c;
	}
}

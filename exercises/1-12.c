// Exercise 1-12 from page 21
// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN	1	// Inside a word
#define OUT	0	// Outside a word

main() {
	int c, previous, state;
	
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (previous == IN) {
				putchar('\n');
			}
		}
		else if (state == OUT) {
			putchar(c);
			state = IN;
		}
		else {
			putchar(c);
		}
		previous = state;
	}
}

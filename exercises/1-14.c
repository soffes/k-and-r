// Exercise 1-14 from page 24
// Write a program to print a histogram of the frequencies of different
// characters in its input.

#include <stdio.h>

#define LIMIT 'z'-' '

main() {
	int nchars[LIMIT], i, x, c;
	
	for (i = 0; i < LIMIT; ++i) {
		nchars[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		if (c >= ' ' && c <= 'z') {
			++nchars[c-' '];
		}
	}
	
	for (i = 0; i < LIMIT; ++i) {
		printf("%2d ", i);
		for (x = 0; x < nchars[i]; ++x) {
			printf("|");
		}
		printf("\n");
	}
}

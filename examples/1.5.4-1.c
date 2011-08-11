// Section 1.5.4 Example 1 from page 20

#include <stdio.h>

#define IN	1	// Inside a word
#define OUT	0	// Outside a word

// Count lines, words, and characters in input
main() {
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

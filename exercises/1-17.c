// Exercise 1-17 from page 31
// Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size

int gline(char line[], int maxline);

// Print input lines longer than 80 characters
main() {
	int len; 			// Current line length
	char line[MAXLINE]; // Current input line
	
	while ((len = gline(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	return 0;	
}

// gline: read a line into `s`, return length
int gline(char s[], int lim) {
	int c, i;
	
	for (i= 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

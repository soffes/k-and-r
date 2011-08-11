// Section 1.9 Example 1 from page 29

#include <stdio.h>

#define MAXLINE 1000 // Maximum input line size

// Note: renamed from `getline` to `gline` since `getline` is already defined
int gline(char line[], int maxline);
void copy(char to[], char from[]);

// Print longest input line
main() {
	int len; 				// Current line length
	int max; 				// Maximum length seen so far
	char line[MAXLINE]; 	// Current input line
	char longest[MAXLINE]; 	// Longest line saved here
	
	max = 0;
	while ((len = gline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	
	if (max > 0) { // There was a line
		printf("%s", longest);
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

// copy: copy `from` into `to`; assume `to` is big enough
void copy(char to[], char from[]) {
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

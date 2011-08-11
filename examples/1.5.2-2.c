// Section 1.5.2 Example 2 from page 18

#include <stdio.h>

// Count characters in input; 2nd version
main() {
	double nc;
	
	nc = 0;
	for (nc = 0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}

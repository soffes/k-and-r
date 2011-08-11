// Section 1.2 Example 1 from page 9

#include <stdio.h>

// Print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300
main() {
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;    // Lower limit of temperature table
	upper = 300;  // Upper limit
	step = 20;    // Step size
  
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

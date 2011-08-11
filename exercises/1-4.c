// Exercise 1-4 from page 13
// Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

// Print Celsius-Fahrenheit table
// for celsius = 0, 20, ..., 300; floating-point version
main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;    // Lower limit of temperature table
	upper = 300;  // Upper limit
	step = 20;    // Step size
	
	celsius = lower;
	printf("Celsius | Fahrenheit\n");
	printf("--------|-----------\n");
	
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%6.1f  | %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

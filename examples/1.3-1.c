// Section 1.3 Example 1 from page 13

#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

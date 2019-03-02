#include <stdio.h>

main()
{
	int fahr, celcius;
	int upper, lower, step;
	
	upper = 300;
	lower = 0;
	step = 20;
	
	fahr = lower;
	
	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%d = %d\n", fahr, celcius);
		fahr = fahr + step;
	}
}

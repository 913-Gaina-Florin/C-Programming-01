// Problem 6
#include <stdio.h>

int h, m;

int x, y;

int result_h, result_m;

int main()
{
	printf("Enter the current time expressed in hours and minutes: ");
	scanf("%d%d", &h, &m);

	printf("Enter x and y: ");
        scanf("%d%d", &x, &y);

	result_h = ((m + y) / 60 + h + x) % 24;
	result_m = (m + y) % 60;

	printf("The current time is: %d:%d\n", result_h, result_m);

	return 0;
}

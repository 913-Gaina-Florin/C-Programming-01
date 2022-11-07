// Problem 5
#include <stdio.h>

int sum, ans;

int coins[] = {1, 2, 5};

int main()
{
	printf("Enter the given amount: ");
	scanf("%d", &sum);

	while (sum > 0)
	{
		for (int i = 2; i>=0; i--)
		{
			while(sum >= coins[i])
			{
				sum -= coins[i];
				ans ++;
			}
		}
	}

	printf("The minimum number of coins required to pay the provided amount is: ");
	printf("%d\n", ans);

	return 0;
}

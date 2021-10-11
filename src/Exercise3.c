/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

	int n = atoi(argv[1]);	
printf(" ");
	int i;
	int store = 3, limit = sqrt(n);
	bool check = false;

	if (n % 2 == 0)
	{
		printf(" 2 ");
		n = n / 2;
		check = true;
		while (n % 2 == 0)
		{
			printf("* 2 ");
			n = n / 2;
		}
	}

	// Now n must be odd
	else
	{
		for (i = 3; i <= limit; i += 2)
		{
			if (n % i == 0)
			{
				printf(" %d ", i);
				n = n / i;
				store = i;
				check = true;
				break;
			}
		}
	}

	for (i = store; i <= limit; i += 2)
	{

		while (n % i == 0)
		{
			printf("* %d ", i);
			n = n / i;
		}
	}

	if (n > 2 && !check)
		printf(" %d", n);
	else if (n > 2 && check)
		printf("* %d", n);
    
    return 0;
}

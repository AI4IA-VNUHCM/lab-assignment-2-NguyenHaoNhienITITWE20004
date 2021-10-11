/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
float cost;
    float n = 0;

    scanf("%f", &cost);
    if(cost <= 1)
    {
        n =  15000;
    }
    else if(cost <= 30 && cost > 1)
    {
        n = (cost - 1)*4000 + 1*5000;
    }
    else
    {
        n = 15000 + 28*8000 + (cost - 30)*5000;
    }
    printf("\nthe amount of money to be paid: %0.3f VND", n);
	return 0;
}
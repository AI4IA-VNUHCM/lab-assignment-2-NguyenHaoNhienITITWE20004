/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int result = 1;
	//Your codes here
	// if input n is odd	 
	if(n % 2 != 0) {		
		for(int i = 1; i <= n; i += 2){
			result = result * i;
		}
	}
	//if input n is even
	else{
		for(int j = 2; j <= n; j += 2){
			result = result * j;
		}
	}
	printf("%d", result); 
	return 0;


}

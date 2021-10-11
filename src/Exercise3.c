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

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
		int n;
		int i;
	scanf("%d", &n);
	int count;
for (int i=2; i <= n; i++){
	count = 0;
}
	while (n % i == 0){
    ++count;
	n /= 1;
	}
	if(count){
		if (count > 1) printf("%d", i, count);
		else printf("%d", i);
		if(n > 1){
			printf(" * ");
		}
	}

	return 0;
}

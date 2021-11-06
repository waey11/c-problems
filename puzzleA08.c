// Puzzle A08 — add up even, odd and all integers from 0 to N

// [E-12]Write a main() program that first asks the user for an integer, 
// N, and then calculates three sums: the sum of the even integers, 
// the sum of the odd integers, and the sum of all integers from 0 to N.
//  The output of the program is:

// Enter n: 7
// Sum = 28, Sum of Odd = 16, Sum of Even = 12

#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int i, N; 
	printf("insert a num: \n");
	scanf("%d", &N);
	int sum=0;
	for (i=0;i<N+1;i++){
		sum=i+sum;
	}
	printf("normal SUm = %d", sum);
	int oddsum=0;
	for (i=1;i<N+1;i=i+2){
		oddsum=i+oddsum;
	}
	printf(" odd sum = %d", oddsum);

	int evensum=0;
	for (i=0;i<N+1;i=i+2){
		evensum=i+evensum;
	}
	printf(" even sum = %d", evensum);
	return 0;
}
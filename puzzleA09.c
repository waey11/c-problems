// Puzzle A09 — add up even, odd and all integers from 0 to N, 
// except those integers divisible by 3 or 4

// [E-13]Write a main() program that first asks the user for an integer, N, 
// and then calculates three sums: the sum of the even integers, the sum of the odd integers,
// nd the sum of all integers from 0 to N.
//  However, exclued from these sums those integers that are divisible by 3 or divisible by 4. 
//  The output of the program is:

// Enter n: 10
// Sum = 25, Sum of Odd = 13, Sum of Even = 12

#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int i, N; 
	printf("insert a num: \n");
	scanf("%d", &N);
	int sum=0;
	for (i=0;i<N+1;i++){
		
		if ((i%4 != 0)&& (i%3 != 0)){
		sum=i+sum;
	}}
	printf("normal SUm = %d", sum);
	int oddsum=0;
	for (i=1;i<N+1;i=i+2){
if ((i%4 != 0) && (i%3 != 0)){
		oddsum=i+oddsum;
		}
	}
	printf(" odd sum = %d", oddsum);

	int evensum=0;
	for (i=0;i<N+1;i=i+2){
		if ((i%4 != 0) && (i%3 != 0)){
		evensum=i+evensum;
		}
	}
	printf(" even sum = %d", evensum);
	return 0;
}
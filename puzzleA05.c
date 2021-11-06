// Puzzle A05 — print the integers from 15 down to 0, one per line

// [E-3]Write a main() program that prints the integers 15 down to 0 one per line. 
// The output of the program is:

// // 15
// 14
// 13
// . . .
// 2
// 1
// 0
#include <stdlib.h>
#include<stdio.h>
int main(){
	int i; 
	for (i=15;i>-1;i--){
		printf("%d \n",i );
	}
	return 0;
}
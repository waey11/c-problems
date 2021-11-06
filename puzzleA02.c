// Puzzle A02 — print the integers from 1 to 15, one per line

// [E-3]Write a main() program that prints the integers 1 to 15 one per line. The output of the program is:

// 1
// 2
// 3
// . . .
// 15
#include <stdio.h>
#include<stdlib.h> 

int main(){
	int i; 
	for (i=0;i<16;i++){
		printf("%d \n",i );
	}
	return 0;
}
// Puzzle A01 — print the integers from 0 to 14, one per line

// [E-3]Write a main() program that prints the integers 0 to 14 one per line. Write the integers to standard output. On a Windows machine, write the integers to the DOS window. The output of the program is:

// 0
// 1
// 2
// 3
// . . .
// 14
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i; 
	for (i=0;i<15;i++){
		printf("%d \n",i );
	}
	return 0;
}


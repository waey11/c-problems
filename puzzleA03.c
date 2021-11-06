// Puzzle A03 — print the integers 0, 2, 4, ... , 20 one per line

// [E-3]Write a main() program that prints the integers 0, 2, 4, up to 20 one per line. The output of the program is:

// 0
// 2
// 4
// . . .
// 20

#include <stdlib.h>
#include<stdio.h> 
int main(){
	int i; 
	for (i=0;i<21;i=i+2){
		printf("%d \n",i );
	}
	return 0;
}
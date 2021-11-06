//  Puzzle A11 — print the ODD integers from 1 to N, five per line

// [E-6]Write a main() program that prints the odd integers 1 to N, five per line. 
// Write the integers to standard output. On a Windows machine,
//  this means the integers are written to the DOS window.
//   Make N a variable in the program and initialize it in an assignment statment 
//   (or read it from user input, if you want.) When N==53, the output of the program is:

//   1  3  5  7  9
//  11 13 15 17 19
//  21 23 25 27 29
//  31 33 35 37 39
//  41 43 45 47 49
//  51 53

// Notice that the last line does not contain a full five integers,
//  but it ends with "\n" anyway. This will take some extra logic.
#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int N,j=0, i;
  printf("enter a num : ");
    scanf("%d", &N);
    for (i=1;i<N+1;i++){
        if((i % 2) !=0){
           printf("%d ", i);
		j = j+1; 
	if(j==5){	
		printf("\n");
		j=0;
	} 
        }
    }
    return 0;
}
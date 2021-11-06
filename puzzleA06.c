// Puzzle A06 — print the ODD integers from 1 to 99, one per line

// [E-3]Write a main() program that prints the odd integers 1 to 99, 
// one per line. The output of the program is:

//   1
//   3
// . . .
//  97
//  99
#include<stdio.h> 
#include<stdlib.h> 
int main()
{
  int i; 
  for (i=1;i<100;i=i+2){
    printf("%d \n",i );
  }
  return 0;
}
// Puzzle A07 — print the first N odd integers. Ask the user for N.

// [E-5]Write a main() program that first asks the user for an integer, 
// N, and the prints the first N odd integers starting with 1, one per line. 
// The output of the program is:

// Enter N: 7
//   1
//   3
//   5
//   7
//   9
//  11
//  13
#include<stdlib.h> 
#include <stdio.h>
int main(){
  int i, N, j; 
printf("input a num: \n");
scanf("%d", &N);
j=0;
while(j<N){
for (i=1;i<(N*2);i=i+2){
printf("%d \n", i);
j=j+1;
}}
  return 0;

}
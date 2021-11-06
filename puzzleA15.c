//  Puzzle A15 — For each integer N from 1 to 100 compute and print the sum 1+2+...+N

// Write a main() program that computes and prints N sums:
//  1, 1+2, 1+2+3, ... , 1+2+3+...+N.
//   There is a smart way to do this with just one loop,
//    and a not-so-smart way that uses nested loops.
//  Try to write the smart way from scratch


#include <stdio.h>
#include <stdlib.h>

/* Puzzle A15 -- For each integer N from 1 to 100 compute
|                and print the sum 1+2+...+N
|
*/
int main(int argc, char *argv[])
{
  int N = 100;   /* line number */
  int sum=0;     /* Sum */
  int j;         /* values 1..100 to add to the sum */

  printf( "N \t Sum\n");
  for (j=1; j<=N; j++)
  {
    sum += j;
    printf("%d \t %d\n", j, sum );
  }
  
  system("pause");
  return 0;
}


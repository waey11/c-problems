// Puzzle A04 — print the integers from -7 to +7, one per line

// [E-3]Write a main() program that prints the integers -7 to +7, one per line.
//  The output of the program is:

// -7
// -6
// . . .
// -1
//  0
//  1
// . . .
//  6

#include<stdlib.h> 
#include<stdio.h> 
int main(){
    int i; 
    for (i=-7;i<8;i++){
        printf("%d \n",i );
    }
    return 0;
}
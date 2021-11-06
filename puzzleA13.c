//  Puzzle A13 — print integers from 1 to 100 that are not multiples of 3 or 5

// [E-8]Write a main() program that prints the integers from 1 up to 100 that are not multiples of 3 or 5. Print ten integers per line. The output of the program is:

//   1  2  4  7  8 11 13 14 16 17
//  19 22 23 26 28 29 31 32 34 37
//  38 41 43 44 46 47 49 52 53 56
//  58 59 61 62 64 67 68 71 73 74
//  76 77 79 82 83 86 88 89 91 92
//  94 97 98

#include<stdlib.h> 
#include<stdio.h> 
int main(){
int i, j=0; 
for (i=1;i<101;i++){
    if (((i % 3) != 0) && ((i % 5) != 0)){
        printf("%d ", i);
        j = j+1; 
        if (j == 10){
            printf("\n");
            j=0;
        }
    }
}
    return 0;
}
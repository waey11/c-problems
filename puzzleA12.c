//  Puzzle A12 — print the ODD integers from start down to finish, seven per line

// [E-8]Write a main() program that prints the odd integers from start down to finish, seven per line. 
// Make start and finish variables that are initialized by assignment (or by user input, if you want.) 
// When start==147, and finish==59, the output of the program is:

//  147 145 143 141 139 137 135
//  133 131 129 127 125 123 121
//  119 117 115 113 111 109 107
//  105 103 101  99  97  95  93
//   91  89  87  85  83  81  79
//   77  75  73  71  69  67  65
//   63  61  59

// The integers that end each line are less regular than in previous programs.
//  It is probably wise to maintain a separate variable that counts the integers as they are printed.
//   The last line does not contain the full five integers, but it ends with "\n"
#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int i, j=0, start, end; 

 printf("enter a end : ");
    scanf("%d", &end);
    
 printf("enter a start : ");
    scanf("%d", &start);
    for (i=end;i>start-1;i--){
        if((i % 2) !=0){
           printf("%d ", i);
	j = j+1; 
	if(j==7){	
		printf("\n");
		j=0;
	} 
        }
    }
    return 0;
}
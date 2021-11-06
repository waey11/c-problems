#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int i, j=0; 
	for (i=0;i<25; i++){

	
		printf("%d ", i);
		j = j+1; 
	if(j==5){	
		printf("\n");
		j=j-5;
	}
// 	  0  1  2  3  4
//   5  6  7  8  9
//  10 11 12 13 14 
//  15 16 17 18 19
//  20 21 22 23 24
	}
	return 0;
}
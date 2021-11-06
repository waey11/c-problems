//  Puzzle A14 — on each line k print all the integers in the range 100*k to (100*k+99) that are multiples of 23.

// [M-9]Write a main() program that prints lines for k==0 up to some limit, say k==11.

// On each line print those integers from 100*k to 100*k+99 that are multiples of 23. 
// For example, here is the output for k==0 up to k==11:

//      0     23     46     69     92
//    115    138    161    184
//    207    230    253    276    299
//    322    345    368    391
//    414    437    460    483
//    506    529    552    575    598
//    621    644    667    690
//    713    736    759    782
//    805    828    851    874    897
//    920    943    966    989
//   1012   1035   1058   1081
//   1104   1127   1150   1173   1196

#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int k,i=0, sum; 
 
for (k=0;k<12;k++){
    for (i=0;i<100;i++){
  sum = 100*k+i;

if (sum % 23 == 0 ){
printf("%d ", sum);
}
    }

printf("\n");
}

 return 0 ;    
}
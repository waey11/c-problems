  # Puzzle A01 — print the integers from 0 to 14, one per line

  [E-3]Write a main() program that prints the integers 0 to 14 one per line. Write the integers to standard output. On a Windows machine, write the integers to the DOS window. The output of the program is:

  0
  1
  2
  3
  . . .
  14
# Puzzle A02 — print the integers from 1 to 15, one per line

  [E-3]Write a main() program that prints the integers 1 to 15 one per line. The output of the program is:

  1
  2
  3
  . . .
  15
 
  # Puzzle A03 — print the integers 0, 2, 4, ... , 20 one per line

  [E-3]Write a main() program that prints the integers 0, 2, 4, up to 20 one per line. The output of the program is:

  0
  2
  4
  . . .
  20

 # Puzzle A04 — print the integers from -7 to +7, one per line

  [E-3]Write a main() program that prints the integers -7 to +7, one per line.
   The output of the program is:

  -7
  -6
  . . .
  -1
   0
   1
  . . .
   6
 # Puzzle A05 — print the integers from 15 down to 0, one per line

  [E-3]Write a main() program that prints the integers 15 down to 0 one per line. 
  The output of the program is:

    15
  14
  13
  . . .
  2
  1
  0

 # Puzzle A06 — print the ODD integers from 1 to 99, one per line

  [E-3]Write a main() program that prints the odd integers 1 to 99, 
  one per line. The output of the program is:

    1
    3
  . . .
   97
   99

 # Puzzle A07 — print the first N odd integers. Ask the user for N.

  [E-5]Write a main() program that first asks the user for an integer, 
  N, and the prints the first N odd integers starting with 1, one per line. 
  The output of the program is:

  Enter N: 7
    1
    3
    5
    7
    9
   11
   13

 # Puzzle A08 — add up even, odd and all integers from 0 to N

  [E-12]Write a main() program that first asks the user for an integer, 
  N, and then calculates three sums: the sum of the even integers, 
  the sum of the odd integers, and the sum of all integers from 0 to N.
   The output of the program is:

  Enter n: 7
  Sum = 28, Sum of Odd = 16, Sum of Even = 12


 # Puzzle A09 — add up even, odd and all integers from 0 to N, 
  except those integers divisible by 3 or 4

  [E-13]Write a main() program that first asks the user for an integer, N, 
  and then calculates three sums: the sum of the even integers, the sum of the odd integers,
  nd the sum of all integers from 0 to N.
   However, exclued from these sums those integers that are divisible by 3 or divisible by 4. 
   The output of the program is:

  Enter n: 10
  Sum = 25, Sum of Odd = 13, Sum of Even = 12


## Puzzle A10 
clone 
  	  0  1  2  3  4
    5  6  7  8  9
   10 11 12 13 14 
   15 16 17 18 19
   20 21 22 23 24


  # Puzzle A11 — print the ODD integers from 1 to N, five per line

  [E-6]Write a main() program that prints the odd integers 1 to N, five per line. 
  Write the integers to standard output. On a Windows machine,
   this means the integers are written to the DOS window.
    Make N a variable in the program and initialize it in an assignment statment 
    (or read it from user input, if you want.) When N==53, the output of the program is:

    1  3  5  7  9
   11 13 15 17 19
   21 23 25 27 29
   31 33 35 37 39
   41 43 45 47 49
   51 53

  Notice that the last line does not contain a full five integers,
   but it ends with "\n" anyway. This will take some extra logic.


  # Puzzle A12 — print the ODD integers from start down to finish, seven per line

  [E-8]Write a main() program that prints the odd integers from start down to finish, seven per line. 
  Make start and finish variables that are initialized by assignment (or by user input, if you want.) 
  When start==147, and finish==59, the output of the program is:

   147 145 143 141 139 137 135
   133 131 129 127 125 123 121
   119 117 115 113 111 109 107
   105 103 101  99  97  95  93
    91  89  87  85  83  81  79
    77  75  73  71  69  67  65
    63  61  59

  The integers that end each line are less regular than in previous programs.
   It is probably wise to maintain a separate variable that counts the integers as they are printed.
    The last line does not contain the full five integers, but it ends with "\n"


  # Puzzle A13 — print integers from 1 to 100 that are not multiples of 3 or 5

  [E-8]Write a main() program that prints the integers from 1 up to 100 that are not multiples of 3 or 5. Print ten integers per line. The output of the program is:

    1  2  4  7  8 11 13 14 16 17
   19 22 23 26 28 29 31 32 34 37
   38 41 43 44 46 47 49 52 53 56
   58 59 61 62 64 67 68 71 73 74
   76 77 79 82 83 86 88 89 91 92
   94 97 98



  # Puzzle A14 — on each line k print all the integers in the range 100*k to (100*k+99) that are multiples of 23.

  [M-9]Write a main() program that prints lines for k==0 up to some limit, say k==11.

  On each line print those integers from 100*k to 100*k+99 that are multiples of 23. 
  For example, here is the output for k==0 up to k==11:

       0     23     46     69     92
     115    138    161    184
     207    230    253    276    299
     322    345    368    391
     414    437    460    483
     506    529    552    575    598
     621    644    667    690
     713    736    759    782
     805    828    851    874    897
     920    943    966    989
    1012   1035   1058   1081
    1104   1127   1150   1173   1196



  # Puzzle A15 — For each integer N from 1 to 100 compute and print the sum 1+2+...+N

  Write a main() program that computes and prints N sums:
   1, 1+2, 1+2+3, ... , 1+2+3+...+N.
    There is a smart way to do this with just one loop,
     and a not-so-smart way that uses nested loops.
   Try to write the smart way from scratch






 ## Puzzle A16
  — print N by M block of stars

[E-5]Write a main() program that prints N lines of M stars each, as follows for N==7 M==21:

*********************
*********************
*********************
*********************
*********************
*********************
*********************

If you want, ask the user for the value N and M; or else, just hard-wire those values into your program. Here is a skeleton: Skeleton.

## Puzzle A17
 — print a diagonal line of stars

[E-7]Write a main() program that prints n lines. On line j, print j dots, followed by a single *. For example, for n==15:

*
.*
..*
...*
....*
.....*
......*
.......*
........*
.........*
..........*
...........*
............*
.............*
..............*

Things are starting to get a little bit tricky. Several things need to be coordinated in this program. Here is a skeleton: Skeleton.

Hard code the value of n, or ask the user.

## Puzzle A18
 — print a wedge of stars

[E-7] Write a main() program that prints a wedge of stars. Print n stars in row 0, (n-1) stars in row 1, (n-2) stars in row 2, and so on. Here is what this looks like:

***************
**************
*************
************
***********
**********
*********
********
*******
******
*****
****
***
**
*

The first star in each line starts in column zero (this is not clear from the above picture.) Here is a skeleton: Skeleton.

## Puzzle A19
 — print a wedge of stars, with the diagonal on the left

[M-8]Write a main() program that prints a wedge of stars. Print n stars in row 0, (n-1) stars in row 1, (n-2) stars in row 2, and so on. But now, pad the left side of each line with spaces so that each line consists of n characters. Here is what this looks like:

***************
 **************
  *************
   ************
    ***********
     **********
      *********
       ********
        *******
         ******
          *****
           ****
            ***
             **
              *

You will need two loops nested inside of the outer loop. Here is a skeleton: Skeleton.

## Puzzle A20
 — print a triange of stars, one star in the first row, three on the second . . . for 12 rows

[M-12]Write a main() program that prints a triangle of stars. Print 1 star in row 0, 3 stars in row 1, 5 stars in row 2, and so on. Here is what this looks like:

...........*...........
..........***..........
.........*****.........
........*******........
.......*********.......
......***********......
.....*************.....
....***************....
...*****************...
..*******************..
.*********************.
***********************

For the non-star characters, use dot or space. Often when debugging programs like this it is useful to print dot instead of space so that it is easier to see what the program did. Here is a skeleton: Skeleton. 
// 2. Write a C program to check whether a given number is even or odd.

#include <stdio.h>
int main()
{
    int number, rem1;
 
    printf("Input an integer : ");
    scanf("%d", &number);
    rem1 = number % 2;
    if (rem1 == 0){
         printf("%d is an even integer\n", number);
    }
    else{
           printf("%d is an odd integer\n", number);
    }
    return 0;
}
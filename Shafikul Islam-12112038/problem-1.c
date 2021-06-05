// 1. Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main()
{
    int number1, number2;
 
    printf("Input the values for Number1 & Number2 : ");
    scanf("%d %d", &number1, &number2);
    if (number1 == number2){
        printf("Number1 & Number2 are equal\n");
    }
    else{
        printf("Number1 & Number2 are not equal\n");
    }
  
}



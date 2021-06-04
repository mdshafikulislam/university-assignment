// 3. Write a C program to check whether a given numberber is positive or negative

#include <stdio.h>
int main()
{
    int number;
 
    printf("Input a numberber :");
    scanf("%d", &number);
    if (number >= 0){
         printf("%d is a positive numberber \n", number);
    }
    else{
          printf("%d is a negative numberber \n", number);
    }
    return 0;
}
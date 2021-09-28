/******************************************************************************

                            Shafikul islam

*******************************************************************************/

#include <stdio.h>
int main() 
{
    int i,n,number[100];
    int position=1,value,count=0;

    printf("Your Array Length is = ");
    scanf("%d",&n);
    printf("Enter your Element of array Value= ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
        for(i=0;i<n;i++)
        {
            if(8==number[i])
            {
                position=i+1;
                printf("Your Element position(index) is = %d\n" ,position,i);
            }

            if(8==number[i])
            {
                count++;
            }
        }
            printf("Your 8 Value count is = %d\n" ,count);

            if(position== -1)
            {
                printf("Value is not Fount \n");
            }

}

//Write a program using a for loop that prints "Pass" for numbers divisible by 2 and "Fail" for numbers not divisible by 2, from 1 to 10.
#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        if(i%2==0)
        {
            printf("\nPass");
        }
        else{
            printf("\nFail");
        }
    }
    
    return 0;
}
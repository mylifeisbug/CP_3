//Write a program that intentionally creates an infinite loop. Provide examples of both an infinite for loop and an infinite while loop.
#include<stdio.h>
int main()
{
    int i;

    for(i=1; i>=1; i++)
    {
        printf("%d",i);
    }

    return 0;
}
//Write a program to print all numbers from 1 to 10 except 5, using the continue statement.
#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
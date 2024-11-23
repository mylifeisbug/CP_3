//Write a program using the for loop to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
    int n=3;
    int fact=1,i;

    for(i=1; i<=n; i++)
    {
        fact*=i;
        if(i==n)
        {
        printf("Factorial of %d is %d\n",n,fact);
        }else{

        }
    }







    return 0;
}
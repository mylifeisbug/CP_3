//Write a program that terminates a loop when the sum of input numbers exceeds 50 using the break statement.
#include<stdio.h>
int main()
{
    int n;
    int i,sum=0;

    printf("Enter a Number: ");

    while(1)
    {
    scanf("%d",&n);

    sum+=n;
    if(sum>=50)
    {
        break;
    }

    }
        printf("sum:%d",sum);


    return 0;
}
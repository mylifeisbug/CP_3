//Write a program using the do…while loop to repeatedly ask the user to enter a positive number until they do so.
#include<stdio.h>
int main()
{
    int n;

    do{
    printf("\nEnter a No.: ");
    scanf("%d",&n);

    if(n>=0)
    {
    printf("%d is Positive",n);
    }
    }
    while(n>=0);
    printf("%d is Negative",n);







    return 0;
}
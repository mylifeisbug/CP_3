//Write a program using a sentinel-controlled loop to accept numbers from the user until they input -1 (sentinel value) and then display the sum of all entered numbers.
#include<stdio.h>
int main()
{
    int n;
    int sum=0;

     printf("\nEnter a No.(Stop with: -1): ");
    while(1)
    {
        scanf("%d",&n);
    
        if(n==-1)
        {         
            break;
        }

        sum+=n;

    }   

        printf("sum:%d",sum);


    return 0;
}
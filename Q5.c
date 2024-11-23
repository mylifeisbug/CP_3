 //Write a program to print the multiplication table from 1 to 5 using a nested loop.
 #include<stdio.h>
 int main()
 {
    int n=5;
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }



    return 0;
 }
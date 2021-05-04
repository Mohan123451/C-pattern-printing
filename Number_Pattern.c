#include<stdio.h>
int main()
{
    char c='A';
    int num,row,col;
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<num-row; col++)
        {
           printf(" ");
        }
        for (col=1; col<=row; col++)
        {
            printf(" %c ",c);
        }
        c++;
        for (col=1; col<num-row; col++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (row=1; row<=num; row++)
    {
        for (col=1; col<row-1; col++)
        {
            printf(" ");
        }
        for (col=1; col<=num-row; col++)
        {
            printf(" %c ",c);
        }
        c++;
        for (col=1; col<row-1; col++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


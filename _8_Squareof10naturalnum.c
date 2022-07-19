//8.Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i=1, sqr;
    while(i<=10)
    {
        sqr=i*i;
        printf("%d ",sqr);
        i++;
    }
    return 0;
}
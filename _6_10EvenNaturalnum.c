//6.Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int i=1,even;
    while(i<=10)
    {
        even=2*i;
        printf("%d ",even);
        i++;
    }
    return 0;
}
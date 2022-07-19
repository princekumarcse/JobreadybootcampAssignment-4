//7.Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=10,even;
    while(i>=1)
    {
        even=2*i;//we can directly use 2*i in printf.
        printf("%d ",even);
        i--;
    }
    return 0;

}
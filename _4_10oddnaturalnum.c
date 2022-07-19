//4.Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i=1,odd;
    while(i<=10)
    {
        odd=2*i-1;
        printf("%d ",odd);
        i++;
    }
    return 0;
}
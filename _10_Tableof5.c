//Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i=1,x=5;//here x is table number
    while(i<=10)
    {
        printf("%d * %d = %d\n",x,i,x*i);
        i++;
    }
    return 0;
}
                                /*take integer input and print the absolute value off that integer*/
#include<stdio.h>
int main()
{ 
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (n<0){//if n is nigetive n means number
    n = n * (-1);
    }
    printf("the absolute value is:%d",n);                 
    return 0;
    }
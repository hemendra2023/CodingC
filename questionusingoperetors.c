//write a program to count digit of a given numbers
#include<stdio.h>
int main()
{
int n;
    printf("enter tha number");
    scanf("%d,&n");
    int count = 0;
    while ( n!=0 ){
    n = n/10;
    count++;
    }
    printf("count of digits is %d:",count);
    return 0;
}
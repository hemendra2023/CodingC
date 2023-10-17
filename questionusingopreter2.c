//write a program to print sum digit of a given numbers
#include<stdio.h>
int main()
{
int n;
    printf("enter tha number:");
    scanf("%d,&n");
    int sum = 0;
    while ( n>10 ){
    int lastdigit = n%10;
    n = n/10;
    sum+=lastdigit;
    }
    printf("sum of digits is %d:",sum);
    return 0;
}
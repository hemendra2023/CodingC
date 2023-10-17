//write a program to print revers of a given numbers
#include<stdio.h>
int main()
{
int n;
    printf("enter tha number:");
    scanf("%d,&n");
    int r = 0; //revers number
    while ( n>10 ){
    int lastdigit = n%10;
    n/=10;
    r*=10;
    r+=lastdigit;
    }
    printf("revers of givin number is %d:",r);
    return 0;
}
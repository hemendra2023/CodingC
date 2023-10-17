#include<stdio.h>

int main()
{
    int a,b;//a>b
    printf("enter divident:");
    scanf("%d",&a);
    printf("enter division:");
    scanf("%d",&b);
    int q = a/b;
    int r = a%b;//modulo opreter% remender nikalne ke liye
    printf("the remender whan %d is divided by %d is:%d",a,b,r);
    return 0;
}
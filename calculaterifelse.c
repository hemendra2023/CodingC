//calculater work
#include<stdio.h>
int main()
{
char ch; //+-*/ calculater opreter
printf("enter the oprater");
scanf("%c",&ch);
int a;
printf("enter 1st number");
scanf("%d",&a);
int b;
printf("enter 2nd number");
scanf("%d",&b);
if (ch=='+') printf("%d",a+b);
else if (ch=='-') printf("%d",a-b);
else if (ch=='*') printf("%d",a*b);
else if (ch=='/') printf("%d",a/b);
else printf("invalid opreter");

return 0;
}
#include<stdio.h>
int main()
{
int a;
printf("enter 1st number:");
scanf("%d",&a);
int b;
printf("enter 2nd number");
scanf("%d",&b);
int c;
printf("enter 3rd number");
scanf("%d",&c);
if (a>b && a>c);{
printf("%d is gretest",a);
}
if (b>a && b>c);{
printf("%d is gretest",b);
} 
 if (c>a && c>b);{
printf("%d is greterst",c);
}
return 0;
}
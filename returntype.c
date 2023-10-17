// return type
#include<stdio.h>
 int min(int x,int y){
 if (x<y)return x;
 else return y;
 }
int main()
{
 int a;
    printf("enter 1st number");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number");
    scanf("%d",&b);
    int m =min(a,b);
    printf("minimum of %d and %d is %d",a,b,m);
    return 0;
}
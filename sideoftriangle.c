#include<stdio.h>
int main()
{
/*maths triangal formula 
    a +b >c
    b +c >a
    a +c >b */
    int a;
    printf("enter 1st side");
    scanf("%d",&a);
    int b;
    printf("enter 2nd side");
    scanf("%d",&b);
    int c;
    printf("enter 3rd side");
    scanf("%d",&c);
    if ( (a + b) >c && (b + a)> c && (a + c) >b ){
    printf("volide triangal:");
    }
    else{
    printf(" involide triangal:");
    }
    return 0;
}
/*area of a circal input.c*/
#include<stdio.h>
int main()
{
float radius;
printf("enterr radius:");
scanf("%f,&radius");
float pi = 3.1415;
float area = pi * radius * radius;
    printf("the area of circal is: %f",area);
    return 0;
}
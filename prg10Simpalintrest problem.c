/*simpal intrast program*/
#include<stdio.h>
int main()
{
float principal,rate,time,si;//4dabbe creat 
printf("enter principal:");
scanf("%f",&principal);
printf("enter rate:");
scanf("%f",&rate);
printf("enter time:");
scanf("%f",time);
si = (principal * rate * time)/100;
    printf("your simpal intrest is:%f",si);
    return 0;
}
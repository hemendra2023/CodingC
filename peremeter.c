// peremiter
#include<stdio.h>
void oddeven(int x){
if (x%2==0)printf("%d is even",x);
else printf("%d is odd",x);
} //function khatam ho gya
int main(){
int a;
printf("enter the number:");
scanf("%d",&a);
oddevern(a); //calling the function
return 0;
}
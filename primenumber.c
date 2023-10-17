#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
 scanf("%d",&n);
 int flog =1; //int-bool, chack-flog, 1-true
 for (int i = 2; i<=n/2;i++){
 if(n%i==0){
 flog=0; //0 means composite
 //flag=false
 break;
 }
 }
 if(n==1)printf("%d is neither prime nor composite",n);
 else if(flog=='ture')
 printf("%d is prime",n);
 else printf("%d is composit",n);
 return 0;
 }
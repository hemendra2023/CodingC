#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int hf=1;
for ( int i=n/2;i>=1;i--){
if (n%i==0){
hf=i;
break;
}
}
printf("higest facter of %d:",hf);
return 0;
}
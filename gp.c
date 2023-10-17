//display this gp 1,2,4,8,16 ,32..upto n terms
#include<stdio.h>
int main()
{
int n;
printf("enter the number of terms");
   scanf("%d",&n);
  int a = 1;
   for (int i = 1; i<=n;i++){
   printf("%d ",a);
   a=a*2;// multipy hoga jitna number input doge utna baar (3 ,4 ,5, 6 ,koi bhi number de sakte hai 
   }
    return 0;
}
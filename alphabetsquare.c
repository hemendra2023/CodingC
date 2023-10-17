/* alphabet squar
Q.print he given pattan
  ABCD
  ABCD
  ABCD
  ABCD 
  depent on ASCII value */
#include<stdio.h>
int main()
{
 int n;
    printf("enter the side of squar");
    scanf("%d",&n);
   for (int i =1;i<=n;i++){ //row
   for (int j =1;j<=n;j++){//colum
   printf("%c",j+64);// j ke jaga i print krne se row wise hoga
   }
   printf("\n");
   }
    return 0;
}
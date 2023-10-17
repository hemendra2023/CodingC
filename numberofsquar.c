/*Q.print he given pattan
  1234
  1234
  1234
  1234,  */
#include<stdio.h>
int main()
{
 int n;
    printf("enter the side of squar");
    scanf("%D",&n);
   for (int i =1;i<=n;i++){ //row
   for (int j =1;j<=n;j++){//colum
   printf("%d",j);//j ke jaga i likhne se 1111,2222,3333,4444 row wise print hoga 
   }
   printf("\n");
   }
    return 0;
}
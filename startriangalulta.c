/*start triangal ulta
Q. print the givin
 ****
 ***
 **
 *          */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side of square:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    for (int j=1;j<=n+1-i;j++){
    printf("* ");
    }
   printf("\n");
    }
    return 0;
}
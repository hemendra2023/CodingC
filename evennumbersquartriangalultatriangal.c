/*even number squar (n=4) 
   1357
   1357
   1357
   1357  */
#include<stdio.h>
int main()
{
 int n;
    printf("enter side of square");
    scanf("%d",&n);
    for ( int i=2;i<=n;i++){// rows
    int a=2;//new variable, loop ke undar ka loop
    for ( int j=2;j<=n;j++){//colums   , n ke ja i krne re triangal & j<n+1-i krne se ulta triangal
    printf("%d ",a);
    a=a+2;//jitna number input doge utna + hoga
    }
    printf("\n");
   } 
   return 0;
}
/*number triangal ulta
Q. print the givin
 1234
 123
 12
 1         */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side of triangal:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){//rows
    for (int j=1;j<=n+1-i;j++){//colums
    printf("%d ",j);
    }
   printf("\n");
    }
    return 0;
}
/*alphabet triangal ulta
Q. print the givin
ABCD
ABC
AB
A    (n=4)        */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side of triangal:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){//rows
    for (int j=1;j<=n+1-i;j++){//colums
    printf("%c ",j);
    }
   printf("\n");
    }
    return 0;
}
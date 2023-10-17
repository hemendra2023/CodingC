/*alphabet & number triangal ulta
Q. print the givin
1A
1A2B
1A2b3c
1a2b3c4d    (n=4)        */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side of triangal:");
    scanf("%d ",&n);
    for (int i=1;i<=n;i++){//rows
    for (int j=1;j<=i;j++){//colums
   printf("%d %c ",i,i+64);// i ke jaga j bhi lga skte hai to colum wise hoga
   }
   printf("\n");
    }
    return 0;
}
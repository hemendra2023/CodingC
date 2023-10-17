/* 0 to 1 triangal
 1
 01
 101
 0101
 10101, */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side of triangal");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){// i ke jaga n to squar & j<n+1-i to ulta tiangal
    if ( (i+j)%2==0)//bracket jaruri hai (i+j) wala
    printf("%d ",1);
    else printf("%d ",0); 
    }
    printf("\n");
    }
    return 0;
}
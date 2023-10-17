//patten printing 
//solid rectangle
//Q.print the given 
/*, *****
     *****
     *****,*/
#include<stdio.h>
int main()
{
/*int m;
    printf("enter no of rows ");
    scanf("%d",&m);*/
    int n;
    printf("enter side of square");
    scanf("%d",&n);//nested loop,means loop ke under loop
    for( int i=1;i<=n;i++){// row=i ^
    for(int j=1;j<=n;j++){ // colums =j>
   printf("* ");
    }
    printf("\n");
    }
    return 0;
}
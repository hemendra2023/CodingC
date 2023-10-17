/*number pyramid polindrems 
           1
         123
       12321
     1234321     */
#include<stdio.h>
int main()
{
int n;
 printf("enter no of lines:");
 scanf("%d",&n);
 int nsp;
 for (int i =1;i<=n;i++){
 for (int q=1;q<=nsp;q++){
 printf("  ");
nsp--; 
}
} 
for ( int j=1;j<=i;j++){
printf("%d ",j);
}
return 0;
}
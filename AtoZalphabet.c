//All alphabet a to z
#include<stdio.h>
int main()
{
int n;
printf("enter the alphabet number");
scanf("%d",&n);
for (int i=1;i<=n;i++){
     printf("%c ",i+64);
    }
    return 0;
}
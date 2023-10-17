/*costprice & selling price*/
#include<stdio.h>
int main()
{ 
    int cp;
    printf("enter cost price:");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price:");
    scanf("%d",sp);
    if (sp>cp);//>grater than
    printf("profit");
    if (sp<cp);//<less than
    printf("loss");
    if (sp==cp);//== both are equal                  
    printf("no profit no loss");
    return 0;
    }
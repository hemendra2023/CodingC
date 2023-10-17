#include<stdio.h>
int main()
{
int x;
    printf("enter number");
    scanf("%d",&x);
   //mathad no 1
   // if (x>=81&&x<=100)printf("very good");
    //if (x>=61&&x<=80)printf("good");
    //if (x>=41&&x<=60)printf("avarage");
    //if (x<=40)printf("fail");
    
    //mathad no 2
    if (x>=81)printf("very good");
    else if (x>=61)printf("good");
    else if (x>=41)printf("avarage");
    else printf("fail");
    
    return 0;
}
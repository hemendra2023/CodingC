 //nested if - else, if else ke under if
//# the positive interger input and tell if it is divisible by 5 and 3 but not divisible by 15
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if ( (n%5==0 || n%3==0) &&n%15!=0){
            printf("the number is divisible by 5 and 3 but not fifteen");
        }
else{
           printf("the number is not requard candition");
        }  
    return 0;
}
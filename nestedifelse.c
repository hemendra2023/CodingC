//nested if - else, if else ke under if
//# the positive interger input and tell if it is divisible by 5 and 3
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (n%5==0) {
        if (n%3==0) {
            printf("the number is divisible by 5 and 3");
        }
        else {
            printf("the number is not divisible by 5 and 3");
        }
    }
    else {
        printf("the number is not divisible by 5 and 3");
    }
    return 0;
}
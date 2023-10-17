/* star triangal reverse
              *
            **
          ***  
        ****  ,sum =5         */
#include<stdio.h>
int main()
{
int n;
    printf("enter the side squar");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){ //outer
    for (int j=1;j<=n-i;j++){// spaces
    printf("  ");
    }
    for (int j=1;j<=i;j++){ //star
    printf("* ");
    }
    printf("\n");
    }
    return 0;
}
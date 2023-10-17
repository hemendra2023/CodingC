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
    int a =1;
    for (int i=1;i<=n;i++){ //outer
    for (int j=1;j<=n-i;j++){// spaces
    printf("  ");
    }
    for (int j=1;j<=i;j++){ //star
   /* printf("%d ",a);  // number ke liye
  a++;  */
   printf("%c ",a+64);   //alphabet ke liye 
   a++;
   }
    
    printf("\n");
    }
    return 0;
}
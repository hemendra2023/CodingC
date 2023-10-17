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
   // mathod 1 
 /* int a =1;
    for (int i=1;i<=n;i++){ //outer
    for (int j=1;j<=n-i;j++){// spaces
    printf("  ");
    }
    for (int j=1;j<=2*i-1;j++){ //only this can be changa
   printf("* ");  
   }
    printf("\n");
    }   */
    
    //mathos 2
    int nsp = n-1; //number of space nsp
    int nst = 1;   //number of star
     for ( int i=1;i<=n;i++){ //uppar loop
     
     for (int j=1;j<=nsp;j++){ //space
     printf("  ");
     }
     for (int j =1;j<nst;j++){ //star
     printf("* ");
     }
      nsp--; //2 kam hoga
      nst+=2; //2 badega
      printf("\n");
      }    
    return 0;
}
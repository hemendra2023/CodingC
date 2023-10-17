// labary function ,power 
#include<stdio.h>
#include<math.h>
 int main()
{
    float a;
    printf("enter base");
    scanf("%f",&a);
    float b;
    printf("enter power");
   scanf("%f",&b);    
   float p = pow ( a,b );
   printf("%f raised to the power %f is %f",a,b,p);
    return 0;
}
// float ke jaga int bhi lga skte hai
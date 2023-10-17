// farmal parameter and actual parameter 
#include<stdio.h>
int min ( int x,int y){ //formal parameter
if (x<y) return x;
else return y;
} //function over
int main(){
int a=3;
int b=9;
int m= min(a,b); //actual parameter, function 
printf("minimam of %d and %d is %d",a,b,m);
    return 0;
}
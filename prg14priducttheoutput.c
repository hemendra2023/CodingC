//predict the output next simpal mathod >
#include<stdio.h>
int main()
{
int i = 2 ,j = 3, k , l;
float a , b;
k = i / j * j; //(2/3)*3=0
l = j / i * i;//(3/2)*2=1*2=2

a = (i / j) * j; //(2/3)*3=0
b = (j / i) * i;//(3/2)*2=1*2=2
    
    printf("%d %d %f %f",k,l,a,b);
    return 0;
}
//ek ke undar doosra ,doosra ke under tesra
#include<stdio.h>
void japan(){
printf("you are in japan");
}
void england(){
printf("you are in england\n");
japan();
}
void india(){
printf("you are in india\n");
england();
}
int main()
{
int a;
    printf("you are in main\n");
    india();//call india
    return 0;
}
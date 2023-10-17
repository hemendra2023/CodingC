// function prototype
#include<stdio.h>
void japan(){
printf("you are in japan");
}
void england(){
printf("you are in england\n");
void japan();// function prototype
japan();
}
void india(){
printf("you are in india\n");
void england();
england();
}
int main()
{
int a;
    printf("you are in main\n");
    void india();// function prototype
    india();//call india
    return 0;
}
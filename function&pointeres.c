/* function & pointers
Q. write a function that print namaste if user is indian & bonjour if the user is french   */
#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("enter f for franch & i for indin");
    char ch;
    scanf("%c",ch);
     if (ch=='i'){
     namaste();
     }
     else{
     banjour();
     }
   return 0;
}
 void namaste(){
 printf("namaste\n");
 }
 void banjour(){
 printf("banjour\n");
 }
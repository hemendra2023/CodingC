/*AREA & perimeter*/
 #include<stdio.h>
int main()
{ 
    int l;
    printf("enter lenth:");
    scanf("%d",&l);
    int b;
    printf("enter brith:");
    scanf("%d",b);
    int area = l * b;
    int perimiter = 2 * (l +b);
    
    if (area > perimiter);{
    printf(" area is grater than perimiter");
   }
   else{
   printf("area is not grater than perimiter");
   }
    return 0;
    }
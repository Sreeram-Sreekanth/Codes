#include<stdio.h>
int main(){
    int a,b;
    printf("enter the values \n");
    scanf("%d %d",&a,&b);
    printf("before swapping a is %d b is %d",a,b);
    a=a^b;//a=a+b;
    b=a^b;//b=a-b;
    a=a^b;//a=a-b;
    printf("\nafter swapping a is %d b is %d",a,b);
}

***********************************************************************

int main(){
    int a,b;
    printf("enter the values \n");
    scanf("%d %d",&a,&b);
    int temp;
    printf("before swapping a is %d b is %d",a,b);
    temp=a;
    a=b;
    b=temp;
   printf("\nafter swapping a is %d b is %d",a,b);
}


**********************************************************************

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("enter the value of a & b");
    scanf("%d %d",&a,&b);
    printf("before Swapping the value of a is %d and b is %d",a,b);
    swap(&a,&b);
    printf("\nafter Swapping the value of a is %d and b is %d",a,b);
}*/

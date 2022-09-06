
set means adding/putting it with 1   in set we use OR operator
in set if the value of binary at position is 1 don't change it if 0 change it
clear means adding it with 0 in clear we use AND operator
in clear if it is 0 no need to change if 1 change it
toggle means if 1 replace it 0 if 0 replace it with 1 we use XOR operator



#include<stdio.h>
int main()
{
    int num, pos;
    printf("enter the number:");
    scanf("%d",&num);
    
    printf("Enter the postion:");
    scanf("%d",&pos);
    
    printf("before the num is %d\n",num);
    
    num = num | 1<<pos-1;//(set)
    num = num &~1<<pos-1;//(clear)
    num = num ^ 1<<pos-1;//(toggle)
    
    printf(" after the num is %d",num);
}



in Bitwise Shifting operations
-> Left shift << means just shifting the element towards leftside by adding 0
     ex: 5-> 0101 ans is 01010__<---
->  Right shift >> means just moving the element towards right side and shifting the postion from front end adding front
     ex: 5 -> 0101 ans is 0010__

simple right shift means removing an element at last
left shit means adding an element at last


//to know how many 1's are there in the value set
#include<stdio.h>
int main(){
    int count =0,n;
    printf("enter the value:");
    scanf("%d",&n);
    while(n){
        count += n&1;
        n>>=1;
    }
    printf("%d",count);
}


//0's
#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i<<1){
        if((i&n)==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
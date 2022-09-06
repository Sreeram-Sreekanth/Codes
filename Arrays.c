#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
         
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


/// inserting an element at an position

#include<stdio.h>
int main(){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n],i,val,loc;
    printf("enter elements");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the data:");
    scanf("%d",&val);
    printf("enter the position:");
    scanf("%d",&loc);
  for(i=n-1;i>=loc;i--){
      arr[i+1]=arr[i];
  }
  arr[loc-1]=val;

    printf("the elements are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

/// deleting an element at an position

#include<stdio.h>
int main(){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n],i,val,loc;
    printf("enter elements");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the data:");
    scanf("%d",&val);
    printf("enter the position:");
    scanf("%d",&loc);
  for(i=loc-1;i<n-1;i++){
      arr[i]=arr[i+1];
  }
  arr[loc-1]=val;

    printf("the elements are:");
    for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
}

// to add an element without replacing

#include<stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n],i,loc,val;
    printf("enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the location to enter the data:");
    scanf("%d",&loc);
   // printf("enter the data:");
    //scanf("%d",&val);
    for(i=loc-1;i<=n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[loc-1]=val;
    printf("the output is:");
    for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
}


//largest element

#include<stdio.h>
int main()
{
    int n,i,large;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    for(i=0;i<n;i++){
    if(arr[i]>large){
        large=arr[i];
    }
    }
    printf("the largest num is %d",large);
}

// smallest element
#include<stdio.h>
int main()
{
    int n,i,small;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    for(i=0;i<n;i++){
    if(arr[i]<small){
        small=arr[i];
    }
    }
    printf("the smallest num is %d",small);
}


//Searching

#include<stdio.h>
int main()
{
    int n,i,r;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&r);
    for(i=0;i<n;i++){
    if(arr[i]==r){
         printf("the element found at %d ",i+1);
         return 0;
    }
    }
       printf("the element not found\n");
    return 0;
}

// array reversing at position using pointer

#include<stdio.h>
int main(){
    int i,n,pos;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position");
    scanf("%d",&pos);
    int *ptr=&arr[pos];
    for(int i=0;i<pos;i++){
    printf("%d ",*(ptr-i));
    }
    
}

// Array reversing 
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
}

#include<stdio.h>
int main(){
    int arr[5]={0,1,2,3,4};
    int large=arr[0];
    int sec_large=arr[1];
    int third_large=arr[2];
    for(int i=1;i<5;i++){
        if(arr[i]>large){
            sec_large=large;
            large=arr[i];
        }
        else if(arr[i]>sec_large){// && arr[i]!=large){
            third_large=sec_large;
            sec_large=arr[i];
        }
        else if(arr[i]>third_large){
            third_large=arr[i];
        }
    }
    
    printf("largest element is %d",large);
    printf("\nsecond largest element is %d",sec_large);
    printf("\nthird largest element is %d",third_large);
    
}
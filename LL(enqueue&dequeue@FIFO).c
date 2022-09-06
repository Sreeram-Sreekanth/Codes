#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

struct node* front=NULL;
struct node* rear=NULL;

void enque(int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    
    if(front==NULL && rear==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void deque(){
    struct node*temp;
    if(front==NULL)
    printf("queue is empty");
    else{
        temp=front;
        front=front->next;
        if(front==NULL)
        rear=NULL;
        
        free(temp);
    }
}

void print(){
    struct node* temp;
    temp=front;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main(){
    int data,size,i;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the data:\n");
    for(i=0;i<size;i++){
        scanf("%d",&data);
        enque(data);
    }
    printf("the enqueue is:  ");
        print();
        
    printf("\nthe dequeue is: ");
    deque();
    print();
    
    printf("\nthe next dequeue is:  ");
    deque();
    print();
}
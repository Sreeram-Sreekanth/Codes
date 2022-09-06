#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;


void delete_end(struct node* head){
    struct node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}

void delete_begin(){
    if(head==NULL){
        printf("list is empty");
    }
    else{
        head=head->next;
    }
}

void delete_atpos(int pos){
    struct node* temp;
    temp=head;
    pos--;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    struct node* temp2;
    temp2=temp->next;
    temp->next=temp2->next;
    temp2->next=NULL;
    free(temp2);
}


void at_begin(int data){
  struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head; 
    head=temp;
}

void insert_atend(int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct node* temp2;
        temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}


void at_pos(int pos, int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    pos--;
    struct  node* temp2;
    temp2=head;
    for(int i=1;i<pos;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}

int length(){
    struct node* temp;
    temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void reverse(){
    struct node* prev=NULL;
    struct node* next=NULL;
    struct node* temp=head;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
}

void print(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main(){
    int n,data,pos,i;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&data);
        insert_atend(data);
    }
    print();
    
    printf("\n enter data to insert at begin:");
    scanf("%d",&data);
    at_begin(data);
    print();
    
    printf("\nenter the position:");
    scanf("%d",&pos);
    printf("\nenter the data:");
    scanf("%d",&data);
    at_pos(pos,data);
    print();
    
    printf("\n enter the position to delete:");
    scanf("%d",&pos);
    delete_atpos(pos);
    print();
    
    printf("\n");
    delete_begin();
    print();
   
   printf("\n"); 
    reverse();
    print();
    
    
    int len=length();
    printf("\n lenght is %d",len);
}
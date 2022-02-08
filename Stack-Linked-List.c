#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void pop();
void push();
void traversal();
void main(){

int a,b;
while(1){
        printf("\n---------------Stack Menu------------\n");
        printf("1. Insertion\n 2. Deletion\n 3. Traversal\n 0. exit\n enter the option\n ");
        scanf("%d",&b);
        switch(b){
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: traversal();
                break;
        case 0: exit(1);
        default: printf("invalid option\n");
                break;

            }
}

}

void push(){

    struct node *temp, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(top==NULL){
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
    temp=top;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}

//deletion at the end
void pop(){
    struct node *temp=top;
    if(top==NULL){
        printf("stack is empty Deletion is not Possible\n");
        return 0;
    }
    else{
        top=top->next;
    }
    temp=top;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}




void traversal(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("\nNO Element Found\n");

    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }

}

// doublly lick list
#include<stdio.h>
#include<stdlib.h>
struct node* createNode();
void InsertatEnd();
void viewNode();
void delAtBeg();
int menu();
struct node{
    struct node *prev;
    int data;
    struct node *link;
};
struct node *start=NULL;

int main(){
    while(1){
        switch(menu()){
            case 1:
                InsertatEnd();
                break;
            case 2:
                delAtBeg();
                break;
            case 3:
                viewNode();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

int menu(){
    int choice;
    printf("1. Insert a node\n");
    printf("2. Delete the first node\n");
    printf("3. View list\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    return choice;
}

void viewNode(){
    struct node *p=start;
    if(start==NULL)
        printf("The list is empty\n");
    else{
        while(p!=NULL){
        printf("%d\n",p->data);
        p=p->link;
    }
    }
}

void delAtBeg(){
    struct node *temp;
    temp=start;
    if(start==NULL)
        printf("The list is empty\n");
    else{
        start=start->link;
        start->prev=NULL;
        free(temp);
    }
}

void InsertatEnd(){
    struct node *t,*temp=createNode();
    if(start==NULL)
        start=temp;
    else{
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
        temp->prev=t;
    }
}
struct node* createNode(){
    int d;
    printf("Enter the data: ");
    scanf("%d",&d);
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->prev=NULL;
    n->data=d;
    n->link=NULL;
    return n;
}
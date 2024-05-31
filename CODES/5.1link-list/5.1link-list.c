// singly link list
#include<stdio.h>
#include<stdlib.h>
struct node* createNode();
void InsertatEnd();
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;

int main(){
    InsertatEnd();
    InsertatEnd();
    printf("%d\n",start->data);
    printf("%d\n",start->link->data);
    return 0;
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
    }
}
struct node* createNode(){
    int d;
    printf("Enter the data: ");
    scanf("%d",&d);
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=d;
    n->link=NULL;
    return n;
}
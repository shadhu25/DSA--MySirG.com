// Stack using array
#include<stdio.h>
#include<stdlib.h>

struct arrayStack{
    int top, capacity, *array;
};

struct arrayStack* createStack(int);
void push(struct arrayStack*, int);
int pop(struct arrayStack*);
int isEmpty(struct arrayStack*);
int isFull(struct arrayStack*);
void displayStack(struct arrayStack*);
int menu();

int main(){
    int data;
    struct arrayStack *Stack=createStack(5);
    while(1){
        switch (menu()){
            case 1:
                printf("Enter a number: ");
                scanf("%d",&data);
                push(Stack,data);
                printf("\n");
                break;
            case 2:
                data=pop(Stack);
                if(data!=-1)
                printf("popped data is %d\n\n",data);
                else
                    printf("Stack Underflow!\n\n");
                break;
            case 3:
                data=isEmpty(Stack);
                if(data==1)
                    printf("Stack is Empty\n\n");
                else
                    printf("Stack is not Empty\n\n");
                break;
            case 4:
                data=isFull(Stack);
                if(data==1)
                    printf("Stack is Full\n\n");
                else
                    printf("Stack is not Full\n\n");
                break;
            case 5:
                displayStack(Stack);
                break;
            case 6:
                exit(1);
            default:
                printf("Invalid choice\n\n");
                break;
        }
    }
}

struct arrayStack* createStack(int cap){
    struct arrayStack *S=(struct arrayStack*)malloc(sizeof(struct arrayStack));
    S->capacity=cap;
    S->top=-1;
    S->array=(int*)malloc(sizeof(int)*cap);
    return S;
}

int isEmpty(struct arrayStack *S){
    if(S->top==-1)
        return 1;
    else
        return 0;
}

int isFull(struct arrayStack *S){
    if(S->top==S->capacity-1)
        return 1;
    else
        return 0;
}

void push(struct arrayStack *S, int data){
    if(!isFull(S)){
        S->top++;
        S->array[S->top]=data;
    }
    else
        printf("Stack Overflow!\n");
}

int pop(struct arrayStack *S){
    int d;
    if(!isEmpty(S)){
        d=S->array[S->top];
        S->top--;
        return d;
    }
    else{
        return -1;
    }
}

void displayStack(struct arrayStack *S){
    if(!isEmpty(S)){
        for(int i=S->top;i>=0;i--)
            printf("%d ",S->array[i]);
        printf("\n\n");
    }
    else{
        printf("Stack Underflow!\n\n");
    }
}

int menu(){
    int choice;
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. isEmpty\n");
    printf("4. isFull\n");
    printf("5. displayStack\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    return choice;
}
// question solved by anupam sir of stack push,pop,peek,traverse
#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int stk[],int *top,int item){
    if(*top==max-1){
        printf("stack is full");
    }
    else{
        (*top)++;
        stk[*top]=item;
    }
}
void pop(int stk[],int *top){
    if(*top==-1){
        printf("stack is empty");
    }
    else{
        printf("\nThe value to be popped is %d",stk[*top]);
        (*top)--;
    }
}
void peek(int stk[],int *top){
    if(*top==-1){
        printf("stack is empty");
    }
    else{
        printf("\nThe top element of stack is %d",stk[*top]);
    }
}
void traverse(int stk[],int *top){
    int temp=*top;
    if(temp==-1){
        printf("stack is empty");
    }
    else{
        while(temp>=0){
            printf("%d ",stk[temp]);
            temp--;
        }
    }
}
int main(){
    int stk[50],top,item,choice;
    top=-1;
    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the no to be pushed:");
            scanf("%d",&item);
            push(stk,&top,item);
            break;
            case 2:
            pop(stk,&top);
            break;
            case 3:
            peek(stk,&top);
            break;
            case 4:
            traverse(stk,&top);
            break;
            case 5:
            exit(0);
        }
    }while(1);
    return 0;
}
// git clone https://github.com/KamalSDhami/DSA-collage-code/tree/master
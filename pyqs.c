// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     struct Node *prev;
//     int data;
//     struct Node *next;
// };
// void lltraversal(struct Node *head){
//     struct Node *p=head;
//     while(p!=NULL){
//         printf("%d ",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// struct Node *insertatend(struct Node *head,int element){
//     struct Node *ptr=head;
//     struct Node *p=(struct Node*)malloc(sizeof(struct Node));
//     if(head==NULL){
//         p->prev=NULL;
//         return p;
//     }
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     ptr->next=p;
//     p->next=NULL;
//     p->data=element;
//     p->prev=ptr;
//     return head;
// }
// int main(){
//     struct Node *head,*second,*third,*fourth,*fifth;
//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));  
//     third=(struct Node*)malloc(sizeof(struct Node));
//     fourth=(struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->prev=NULL;
//     head->data=10;
//     head->next=second;

//     second->prev=head;
//     second->data=11;
//     second->next=third;

//     third->prev=second;
//     third->data=12;
//     third->next=fourth;

//     fourth->prev=third;
//     fourth->data=13;
//     fourth->next=fifth;

//     fifth->prev=fourth;
//     fifth->data=14;
//     fifth->next=NULL;
//     printf("Link list before insertion:\n");
//     lltraversal(head);
//     printf("Link list after insertion:\n");
//     insertatend(head,15);
//     lltraversal(head);
//     return 0;
// }

// in circular link list in order->30 35 40 45 50 
// output:50 30 35 40 45
#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};
void lltraversal(struct Node *head){
    struct Node *p=head;
    if(head!=NULL){
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
    printf("\n");
    }
}
struct Node *change_head(struct Node *head){
    struct Node *p=head;
while(p->next!=head){
    p=p->next;
}
head=p;
return head;
}
int main(){
    struct Node *head,*second,*third,*fourth,*fifth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));  
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    head->prev=fifth;
    head->data=30;
    head->next=second;

    second->prev=head;
    second->data=35;
    second->next=third;

    third->prev=second;
    third->data=40;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=45;
    fourth->next=fifth;

    fifth->prev=fourth;
    fifth->data=50;
    fifth->next=head;
    printf("Link list before insertion:\n");
    lltraversal(head);
    printf("Printing the link list in given order as given in question:\n");
    head=change_head(head);
    lltraversal(head);
    return 0;
}
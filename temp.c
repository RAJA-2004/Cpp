#include<stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node*next;  
};
void reverse(struct node**head)
{
    struct node*current=(*head);
    struct node*prev=NULL;
    struct node*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    (*head)=prev;
}
void reverse_node(struct node**head,int val)
{
    struct node* temp=(*head);
    struct node* prev = NULL;
    struct node* next = NULL;
    int count = 0;
    while(temp != NULL && count < val)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
        count++;
    }
    if(*head != NULL)
    {
        (*head)->next = temp;
    }
    struct node* rest_head = temp;
    reverse(&rest_head);
    if(*head != NULL)
    {
        (*head)->next = rest_head;
    }
    (*head) = prev;
}
void createnode(struct node**head,int data)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->data=data;
    if((*head)==NULL)
    {
        (*head)=new;
    }
    else
    {
        struct node*temp=(*head);
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
}
void display(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
int main ()
{
    struct node*head=NULL;
    int n=0;
    while(n!=-1)
    {
        printf("enter element in a: ");
        scanf("%d",&n);
        if(n==-1)break;
        createnode(&head,n);
    }
    display(head);
    reverse_node(&head,3);
    display(head);
    return 0;
}
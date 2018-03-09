#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head=NULL;
n *temp=NULL;
void create()
{
    n *newnode;
    int no;
    newnode=(n*)malloc(sizeof(n));
    scanf("%d",&no);
    newnode->data=no;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("NULL");
    }
}
void count()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("\n%d nodes",count);
}
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        create();
    }
    display();
    count();
	return 0;
}

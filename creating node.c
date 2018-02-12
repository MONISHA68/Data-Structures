#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *head;
}nd;
nd *head,*temp,*temp1,*head1;
void create(nd **head1)
{
    int d;
    scanf("%d",&d);
    if(head==NULL)
    {
      head1=(nd)malloc(sizeof(nd));
      head=>data=d;
      head->next=NULL;
      temp=head;
    }
    else
    {
        temp1=(nd)malloc(sizeof(nd));
        temp1->data=d;
        temp1->next=NULL;
        temp->next=temp1;
        temp=temp1;
    }
}
void display()
{
    nd *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main() 
{
    int n;
	printf("1.create\n2.display\n3.exit\n");
	scanf("%d",&n);
	while(1)
	{
	    switch(n)
	    {
	        case 1:
	        create(&head);
	        case 2:
	        display();
	        case 3:
	        exit(0);
	    }
	}
	return 0;
}

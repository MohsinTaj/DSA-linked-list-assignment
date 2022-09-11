//                                            merging 2 list                                                         //

#include <stdio.h>
#include<stdlib.h>
	
//Create node function
struct node{
	int data;
	struct node *next;
};
typedef struct node *nodeptr;


int main() //creating linked list having 4 nodes;
{
nodeptr head1,head2,ptr;
nodeptr p,q,r,s,t;
head1= (nodeptr)malloc(sizeof(struct node));
head2= (nodeptr)malloc(sizeof(struct node));
p= (nodeptr)malloc(sizeof(struct node));
head1->next=p;
int item=6, x=20;
p->data=x;


q= (nodeptr)malloc(sizeof(struct node));

q->data=67;
p->next=q;
q->next=NULL;


r= (nodeptr)malloc(sizeof(struct node));

r->data=item;
head2->next=r;

s= (nodeptr)malloc(sizeof(struct node));
s->data=23;
r->next=s;
s->next=NULL;
ptr=head1;
while(ptr->next!=NULL)
{
	ptr=ptr->next;
}
ptr->next=head2->next;
free(head2);
printf("\n%d",q->next);
printf("\n%d",r);
return 0;


}

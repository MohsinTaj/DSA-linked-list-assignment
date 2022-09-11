//                                            DELETION                                                          //

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
nodeptr head;
nodeptr p,q,r,s,t;
head= (nodeptr)malloc(sizeof(struct node));
p= (nodeptr)malloc(sizeof(struct node));
head->next=p;
int x=20;
p->data=x;


q= (nodeptr)malloc(sizeof(struct node));

q->data=67;
p->next=q;


r= (nodeptr)malloc(sizeof(struct node));

r->data=6;
q->next=r;

s= (nodeptr)malloc(sizeof(struct node));
s->data=23;
r->next=s;

t= (nodeptr)malloc(sizeof(struct node));
t->data=42;
s->next=t;
t->next=NULL;
//                      LENGHT OF LINKED LIST                     //

nodeptr ptr;
ptr=head;
int count=0;

while(ptr->next!=NULL)
{
	ptr=ptr->next;
	count=count+1;

}
printf("The lenght is %d", count);
return 0;
}


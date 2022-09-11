//                                      INSERT A NODE BEFORE POSITION                           //
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
//                                           delete before node                                            Z
if (head==NULL){
	printf("void DELETION:");
} 

nodeptr ptr,temp ;
temp=(nodeptr)malloc(sizeof(struct node));
temp->data=9;
temp->next=NULL;
	ptr=head;
	while(ptr->next!=q){
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->next=q;
	free(q);
		printf("\n%d",temp->next);
		printf("\n%d",q);
		
	return 0;
	
}

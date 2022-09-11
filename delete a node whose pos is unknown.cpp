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
int  x=20;
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
//                                   delete a node at specific position                                      //
if (head==NULL){
	printf("void seaching:");
} 

nodeptr ptr;
ptr= (nodeptr)malloc(sizeof(struct node));
	ptr=head;
	while(ptr->next->data=6){
		if(ptr->next=r){
			q->next=r->next;
			free(ptr->next);
			printf("\n%d",r->data);
			
			break;
			
		}
	
		else{
		
		ptr=ptr->next;
	}
}

	return 0;
}


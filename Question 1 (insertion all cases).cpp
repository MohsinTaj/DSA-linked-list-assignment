#include <stdio.h>
#include<stdlib.h>
	
//Create node function
struct node{
	int data;
	struct node *next;
};
typedef struct node *nodeptr;


int main() //creating linked list having 3 nodes;
{
nodeptr head;
nodeptr p;
head= (nodeptr)malloc(sizeof(struct node));
p= (nodeptr)malloc(sizeof(struct node));
head->next=p;
int x=20;
p->data=x;

nodeptr q;
q= (nodeptr)malloc(sizeof(struct node));

q->data=67;
p->next=q;

nodeptr r;
r= (nodeptr)malloc(sizeof(struct node));

r->data=6;
q->next=r;
r->next=NULL;
//-----------------------------------------------------------------------------//
                                  //insert a node at head//                                                     
nodeptr s;   
s= (nodeptr)malloc(sizeof(struct node));
s->data=29;



printf("\n%d",p->data);
printf("\n%d",q->data);
printf("\n%d",r->data);
if(head==NULL)
{
	printf("empty");
	head=s;
	s->next=NULL;
}
else{
	s->next=head->next;
	head->next=s;
	printf("\nattack");
		printf("\ninsertion at head");
	printf("\n%d",head->next);
	printf("\n%d",p->next);
	printf("\n%d",q);
	
	
}
//----------------------------------------------------------------------------------------------------------//
//                                             INSERT AFTER P                                               //
nodeptr insert_aft_pos,t;

insert_aft_pos=t;
t=(nodeptr)malloc(sizeof(struct node));
t->data=43;
t->next=NULL;
if(p==NULL)
{
	p=t;
	printf("\nnothing here");
	t->next=NULL;
}
else{
    p->next=t->next; 
	t->next=p;

	printf("\ninsertion after p;");
	printf("\n%d",p);
	printf("\n%d",t->next);
	
}
//----------------------------------------------------------------------------------------------------------------//
//                                               insert at tail                                                //
nodeptr temp,ptr,tempptr;

ptr=head;
temp=(nodeptr)malloc(sizeof(struct node));
tempptr->next=temp;
temp->data=59;
temp->next=NULL;
if(head==NULL)
{
	printf("empty");
}
else {
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		
	}
	ptr->next=tempptr->next;
	
	temp->next=0;
		printf("\ninsert AT TAIL");
	printf("\n%d",temp);
	printf("\n%d",r->next);
		
	
}
free(tempptr);
free(ptr);
return 0;
}



#include <stdio.h>
#include<stdlib.h>
#include<stdlib.h>
	

struct node{
	int data;
	struct node *next;
};
typedef struct node *nodeptr;

//Create node function

int main()
{
nodeptr p;
p= (nodeptr)malloc(sizeof(struct node));

p->data=69;
p->next=NULL;

free(p);
printf("%d",p->data);
return 0;
}




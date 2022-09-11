#include <stdio.h>
#include <stdlib.h>
                    //create node function
struct node{
    int  data;
    struct node *next;
} ;
typedef struct node *nodeptr;
 

int main()// create linked list having three nodes//
{
    nodeptr head = (nodeptr)malloc (sizeof (struct node));
    nodeptr p =(nodeptr) malloc (sizeof (struct node));
    head->next=p;
    p-> data= 45;
    
    
    nodeptr q = (nodeptr)malloc (sizeof (struct node));
    p->next = q;
    q ->data = 55; 
    
    
    nodeptr r =(nodeptr) malloc (sizeof (struct node));
    q->next = r;
    r->data = 65; 
    r-> next= NULL;
    
 //--------------------------------------------------------------------------------------------------------------//
                                        //INSERT  A NODE AT HEAD//
                                        
    
    nodeptr s =(nodeptr) malloc (sizeof (struct node));
    s->data =30;
    s->next= NULL;
    
    printf ("\n%d ",p->data);
    printf ("\n%d ",q->data);
    printf ("\n%d ",r->data);
     if (head == NULL){
         printf("empty");
         head = s;
         s->next =NULL;
     }
     else{
         s-> next =head->next;
         head->next= s;
         
        
     }
    printf ("\n%d ",head-> next);
    printf ("\n%d ",s);
    
         
      return 0;
  }

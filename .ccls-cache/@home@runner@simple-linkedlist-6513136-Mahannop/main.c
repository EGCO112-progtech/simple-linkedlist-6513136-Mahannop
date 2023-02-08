//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node *head; //delete struct node a; 
    typedef struct node Node;
    typedef Node* Nodeptr; 
    Nodeptr p = (Nodeptr)malloc(sizeof(Node)); 
    head = p;
    //instead using struct node a --> malloc(sizeof(...))
    //struct node *a = (struct node *)malloc(sizeof(struct node));
    p->value = c; //a.value = c;
    p->next = (Nodeptr)malloc(sizeof(Node)); //a.next = &b;
    //head = &a;
    p->next->value = head->value+3;
    /* struct node *go;
    b.next = &right;
    go = &b; 
    right.value = 11;
    right.next = NULL; */
    p->next->next = (Nodeptr)malloc(sizeof(Node)); 
    p->next->next->value = 11; 
    p->next->next->next = NULL; //it same as for loop !!
    printf("%d\n", head->value ); //result : 5
    printf("%d\n", head->next->value ); //result : 8
    printf("%d\n", p->next->value); // a.value->next->value result : 8
    printf("%d\n", head->next->next->value); // it could be 11
    /* struct node left; 
    left.value = 2;
    left.next = p; //left.next = &a; 
    head = &left; 
    printf("%d\n", head->value); */ //2 

  /*  Exercise I ( cleared !)
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II ( cleared ! )
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
    for(int i=0;i<4;i++) { 
       p->next = (Nodeptr)malloc(sizeof(Node)); 
       p->next->value = p->value+3;
       p=p->next; 
      //printf("%3d ",tmp->value); 
      //tmp=tmp->next;
    } printf("\n"); 
    //end for loop linked list 
    p = head; //starting new node
    printf("All Linked List is : "); 
    while(p != NULL) {
      tmp = p;
      printf("Deleting %d\n",tmp->value); 
      p=p->next;
      free(tmp);
    }
    /*  Exercise III Use loop to print everything ( cleared ! )
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing??? --> ( tmp = tmp->next; )
        }
    */
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       ( cleared ! )
         while(){  
            printf("%3d", tmp->value);
           // What is missing??? while(tmp!=NULL) and tmp = tmp->value; 
        }
    */
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
  

    /*  Exercise VI Free all node !!
         //use a loop to help
    */ 
    
    return 0;
}

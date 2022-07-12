// This is an abitrary way of implementing linked list. 
// where we are declaring a bunch of nodes before using them 

#include <stdlib.h>
#include <stdio.h>


typedef struct node {
    int value; 
    struct node* next; // points to the next node on the list

} node_t;

//typedef struct node node_t; 

// function that prints the linked list that takes in the pointer to node struct (head of the node struct)
void printlist(node_t *head ){

    node_t *temporary = head ; // temporary pointer 

    while (temporary != NULL){ 

       printf("%d - " , temporary-> value);
       temporary = temporary -> next;
    }
    printf("\n");
}

int main(){
    node_t n1,n2,n3; // initialize node 

    node_t *head; // head pointer 

    n1.value = 45 ; 
    n2.value = 8 ; 
    n3.value = 35 ; 

    head = &n2;
    n2.next = &n3;
    n3.next = &n1; 
    n1.next = NULL ; //next pointer of the last pointer to null.

    node_t n4 ; // creating another node 
    n4.value = 5 ; 
    n4.next = &n3 ; 
    n2.next = &n4 ;  


    printlist(head);
    return 0; 
}

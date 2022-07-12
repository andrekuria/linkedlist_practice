// This is an abitrary way of implementing linked list. 
// where we are dclaring a bunch of nodes before using them 

#include <stdlib.h>
#include <stdio.h>


struct node {
    int value; 
    struct node* next; // points to the next node on the list

};

typedef struct node node_t; 

// function that prints the linked list that takes in the pointer to node struct (head of the node struct)
void printlist(node_t *head ){

    node_t *temporary = head ; // temporary pointer 

    while (temporary != NULL){ 

       printf("%d - " , temporary-> value);
       temporary = temporary -> next;
    }
    printf("\n");
}

//function that creates new nodes and returns node_t pointer and takes in an integer value 

node_t *create_new_node(int value ){

    node_t *result = malloc(sizeof(node_t)); //*result is the pointer to newly created node
    result -> value = value; // setting value of the node 
    result -> next = NULL; // having the node point to NULL

    return result; 
}

int main(){

    node_t *head; 
    node_t *tmp ; 

    /* in the following format you will see that we create a node , set its 
    next pointer to the head (front of the list) then set the head to point to the new node


    */
    tmp = create_new_node(32);
    head = tmp;
    tmp = create_new_node(56);
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(78);
    tmp->next = head;
    head = tmp;


    printlist(head);
    return 0; 
}

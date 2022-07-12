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

    node_t *head = NULL; // has to be null as we will point the head once node is created 
    node_t *tmp ; 

    /* this one implements a for loop that will have 1 to 9 in a linked list 
    where it will be in descending order as each value once created the head will point to it 
    thus putting the element on top of the list


    */  
    for (int i = 0 ; i <10 ; i++){
        tmp = create_new_node(i);
        tmp->next = head; // the next pointer points to the head 
        head = tmp ; // points to the most recent made node
    }



    printlist(head);
    return 0; 
}

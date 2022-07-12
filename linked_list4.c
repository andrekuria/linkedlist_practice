// implementing linked list with a bunch of functions 


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

//function that inserts a node at the head, it takes in the head and pointer to node we want to insert   
node_t *insert_at_head(node_t *head ,node_t *node_to_insert){

    node_to_insert->next = head;

    return node_to_insert; //returning the address of new node thus we should set head to this value

}

//same as insert at head function but you dont have to point the head explicitly  
node_t *insert_at_head_implicit(node_t **head ,node_t *node_to_insert){

    node_to_insert->next = *head;

    *head = node_to_insert;

    return node_to_insert; //returning the address of new node thus we should set head to this value

}

// function that finds a node 

node_t *find_node(node_t *head , int value)
{

    node_t *tmp = head; // pointer to node addressed by head 
    while (tmp != NULL){ // if the value is none
        if(tmp->value == value) return tmp;  //return the found node
        tmp = tmp->next; // go to next node
    }
    return NULL;
}

// function that inserts node after another node 

void insert_after_node(node_t *node_to_insert_after , node_t* newnode){

    newnode->next = node_to_insert_after -> next; 

    node_to_insert_after -> next = newnode;
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
        //head = insert_at_head(head , tmp); explicit implementation of head node
        insert_at_head_implicit(&head , tmp);
    }

    insert_after_node(tmp , create_new_node(76));
    printlist(head);

    tmp = find_node(head, 5);
    printf("Found node with value %d\n " , tmp -> value);

    
    return 0; 
}

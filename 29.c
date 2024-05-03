#include<stdio.h> 
#include <stdlib.h> 
// Node structure for the linked list 
struct Node  
{ 
int data; 
struct Node* next; 
}; 
// Function to create a new node 
struct Node* new_Node(int data)  
{ 
struct Node* node = (struct Node*) malloc(sizeof(struct Node)); 
node->data = data; 

 
    node->next = NULL; 
    return node; 
} 
 
// Function to merge two sorted linked lists into a single sorted linked list 
struct Node* mergeTwoLists(struct Node* head1, struct Node* head2)  
{ 
    // If either of the linked lists is empty, return the other list 
    if (!head1) return head2; 
    if (!head2) return head1; 
 
    // Create a dummy node to store the result 
    struct Node dummy; 
    struct Node* tail = &dummy; 
 
    // Traverse both linked lists, adding smaller elements to the result list 
    while (head1 && head2)  
    { 
        if (head1->data < head2->data)  
        { 
            tail->next = head1; 
            head1 = head1->next; 
        } 
        else    
         { 
            tail->next = head2; 
            head2 = head2->next; 
        } 
        tail = tail->next; 
    } 
 
    // If either of the linked lists is not fully processed, append the rest of the elements 
    tail->next = head1 ? head1 : head2; 
 
    // Return the result 
    return dummy.next; 
} 
 
// Function to display a linked list 
void displayList(struct Node* head)  
{ 
    while (head)  

    { 
        printf("%d ", head->data); 
        head = head->next; 
    } 
    printf("\n"); 
} 
 
// Main function to demonstrate merging of two sorted linked lists 
int main()  
{ 
    // Creating two sorted singly linked lists 
    struct Node* list1 = new_Node(1); 
    list1->next = new_Node(3); 
    list1->next->next = new_Node(5); 
    list1->next->next->next = new_Node(7); 
 
    struct Node* list2 = new_Node(2); 
    list2->next = new_Node(4); 
    list2->next->next = new_Node(6); 
 
    // Displaying the two sorted lists 
    printf("Two sorted singly linked lists:\n"); 
    displayList(list1); 
    displayList(list2); 
 
    // Merging the two lists and displaying the merged list 
 struct Node* result = mergeTwoLists(list1, list2); 
 printf("\nAfter merging the said two sorted lists:\n"); 
             displayList(result); 
 
    return 0; 
} 
 
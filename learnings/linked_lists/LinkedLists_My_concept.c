#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};

void traversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d-> ", ptr->data);
        ptr= ptr->next;
    }
}

struct node* insert_Atbegining(struct node *head, int input)
{
    struct node* p;
    p = (struct node*) malloc (sizeof(struct node));
    p->data= input;
    p->next=head;
    
    return p;
}

struct node* insert_Atbetween(struct node *head, int index, int input)
{
    struct node* p= head;
    struct node* ptr;
    
    
    ptr = (struct node*) malloc (sizeof(struct node));
    ptr->data= input;
    int i=0;
    while(i<index-1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

struct node* insertion_AtEnd(struct node *head, int input)
{
    struct node *ptr = head;
    
    struct node *p = (struct node*) malloc (sizeof(struct node));
    p->data = input; 
    p->next= NULL;
    
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    
    return head;
}

struct node* insertion_AtGivenNode(struct node *head, struct node *given,
int input)
{
    struct node* p = (struct node*) malloc (sizeof(struct node));
    p->data = input;
    p->next = given->next;
    given->next = p;

    return head;
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    
    head = (struct node*) malloc (sizeof(struct node));
    first = (struct node*) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    
    head->data = 44;
    head->next = first;
    
    first->data = 30;
    first->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 15;
    third->next = NULL;
    
    traversal(head);
    //head = insert_Atbegining(head, 99);
    //head = insert_Atbetween(head, 1, 99);
    //head = insertion_AtEnd(head, 77);
    head=insertion_AtGivenNode(head, second,62);
    printf("\nafter insertion\n");
    traversal(head);
}
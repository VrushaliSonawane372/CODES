/********* LINKED LIST ********* */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node**  PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn =(PNODE) malloc(sizeof(NODE));   //allocate the memory

    newn->data = no;                        //initialise the members
    newn->next = NULL;

    if(*head == NULL)   //case 1(if LL is empty)
    {
        *head = newn;
    }
    else    //case 2(if LL contains atleast 1 node)
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn =(PNODE) malloc(sizeof(NODE));   //allocate the memory

    newn->data = no;                        //initialise the members
    newn->next = NULL;

    if(*head == NULL)   //case 1(if LL is empty)
    {
        *head = newn;
    }
    else    //case 2(if LL contains atleast 1 node)
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,107);

    return 0;
}
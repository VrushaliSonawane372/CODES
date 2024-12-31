#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}
void InsertLast(PPNODE head, int no)
{  
     PNODE newn = NULL;
     PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE head)
{  
    printf("Elements of LinkedList are :\n");

    printf("NULL <=> ");
    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
        head = head->next;
    }
    printf("\n");
}

int Count(PNODE head)
{ 
    int iCount = 0;
    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}
void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)   //Case 1
    {
        return;
    }
    else if((*head)->next == NULL)   //Case 3
    {
        free(*head);
        *head = NULL;
    }
    else               //Case 3
    {
           *head = (*head)->next; 
           free((*head)->prev); //$
           (*head)->prev = NULL;        //$ 
    }

}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

   if(*head == NULL)   //Case 1
    {
        return;
    }
    else if((*head)->next == NULL)   //Case 3
    {
        free(*head);
        *head = NULL;
    }
    else               //Case 3
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
         free(temp->next);
         temp->next = NULL;
    } 
}
void InsertAtPos(PPNODE head, int no,int iPos)
{
     int CountNode = 0;
    
     PNODE temp = NULL;
     CountNode = Count(*head);
     
     if((iPos < 1) || (iPos > CountNode + 1))
     {
            printf("Invalid Position..\n");
            return ;
     }
     if(iPos == 1)
     {
        InsertFirst(head,no);
     }
     else if(iPos == CountNode + 1)
     {
        InsertLast(head,no);
     }
     else
     {
            PNODE newn = NULL;
            newn = (PNODE)malloc(sizeof(NODE));
            newn->data = no;
            newn->next = NULL;
            newn->prev  = NULL;

            temp = *head;
            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;        //1
            temp->next->prev = newn;        //2
            temp->next = newn;              //3
            newn->prev = temp;                //4
     }
}
void DeleteAtPos(PPNODE head,int iPos)
{ 
    int CountNode = 0;
    
     PNODE temp = NULL;
      PNODE target = NULL;

     CountNode = Count(*head);
     
     if((iPos < 1) || (iPos > CountNode))
     {
            printf("Invalid Position..\n");
            return ;
     }
     if(iPos == 1)
     {
        DeleteFirst(head);
     }
     else if(iPos == CountNode)
     {
        DeleteLast(head);
     }
     else
     {
           temp = *head;
            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp->next;
            }
            target = temp->next;
            temp->next = target->next;
            temp->next->prev = temp;
            free(target);
     }
}
 
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);
    InsertLast(&first,211);


    InsertAtPos(&first,75,4);
    Display(first);
    iRet = Count(first);
    printf("Elements of LinkedLost are : %d\n",iRet);

    DeleteAtPos(&first,4);
    Display(first);
    iRet = Count(first);
    printf("Elements of LinkedLost are : %d\n",iRet);

    return 0;

}
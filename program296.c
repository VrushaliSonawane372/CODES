/*************     Linked-List  *********/
#include<stdlib.h>
#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;  
    struct node *ptr = &obj;

    obj.data = 11;
    ptr->data = 11;

    obj.next = NULL;
    ptr->next = NULL;

    printf("Value is : %d\n",obj.data);
     printf("Value is : %d\n",ptr->data);

    return 0;
}
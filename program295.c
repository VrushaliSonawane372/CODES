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

    printf("Size of node is : %d",sizeof(obj));

    return 0;
}

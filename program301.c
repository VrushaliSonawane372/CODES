/*************     Linked-List  *********/
#include<stdlib.h>
#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

void Demo1(struct node *head)
{

}

void Demo2(struct node **head)   
{

} 

int main()
{
    struct node *first = NULL;

    struct node obj1;
    struct node obj2;
    struct node obj3;  

    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;

    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;

    first = &obj1;

    Demo1(first);     //call by value
    Demo2(&first);     //call by address
    
    return 0;
}

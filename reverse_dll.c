#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node *next;
struct Node *prev;
};
void reverse(struct Node**start)
{
struct Node*temp=NULL;
struct Node*current=*start;
while(current!=NULL)
{
temp=current->prev;
current->prev=current->next;
current->next=temp;

current=current->prev;

}
if(temp!=NULL)
*start=temp->prev;
}
void push(struct Node**start,int new_info)
{
struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
new_node->info=new_info;
new_node->prev=NULL;
new_node->next=(*start);
if((*start)!=NULL)
(*start)->prev=new_node;
(*start)=new_node;
}
void printList(struct Node*node)
{
while(node!=NULL)
{
printf("%d",node->info);
node=node->next;
}
}
int main()
{
struct Node*start=NULL;
push(&start,2);
push(&start,4);
push(&start,8);
push(&start,10);
printf("Original");
printList(start);
reverse(& start);
printf("\n");
printf("Reversed Linked List");
printList(start);
return 0;
}













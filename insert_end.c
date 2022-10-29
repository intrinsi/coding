#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_end(struct node *);

int main()
{
  int choice;
  do
  {
    printf("\nEnter 1 to create list, \n2 to insert data from the end, \n3 to display \nand 4 to end!\n:-");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:start= create_list(start);
            printf("Linked List Created: ");
            break;
     
     case 2:start= insert_end(start);
            break;
            
     case 3:start= display(start)
            break;
    }
  }while(choice !=4)
  return 0;
}

struct node *create_ll(struct node *start)
{
   struct node *new_node, *ptr;
   int num;
   printf("\nEnter -1 to end\nEnter the Data:");
   scanf("%d",&num);
  while(num!=-1)
  {
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    if(start=NULL)
    {
      new_node->next=NULL;
      start=new_node;
    }
    else
    {
      ptr=start;
      while(ptr->next!=NULL)
      {ptr=ptr->next;}
      ptr->next = new_node;
      new_node->next=NULL;
      
    }
    printf("\nEnter the data: ");
    scanf("%d",&num);
  }
  return start;
}

struct node *display(struct node *start)
{
  struct node *ptr;
  ptr=start;
  while(ptr!=NULL)
  {
    printf("\t %d", ptr->data);
    ptr=ptr->next;
  }
  return start;
}

struct node *insert_end(struct node *start)
{
   struct node *new_node, *ptr;
   int num;
   printf("\nEnter the Data to be inserted from the end:");
   scanf("%d",&num);
   new_node=(struct node *)malloc(sizeof(struct node));
   new_node->data=num;
   new_node->next=NULL;
  ptr=start;
  while(prt->next !=NULL)
  {prt=ptr->next;}
  ptr->next = new_node;
  return start;
}

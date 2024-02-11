#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *New_Node=NULL;
struct Node *Top=NULL,*ptr=NULL;
void push(int Val)
{
   New_Node=(struct Node*)malloc(sizeof(struct Node));
   New_Node->data=Val;
   if(Top==NULL)
   {
     New_Node->next=NULL;
     Top=New_Node;
   }
   else
   {
     New_Node->next=Top;
     Top=New_Node;
   }

}
void pop()
{
  if(Top==NULL)
  {
    printf("Stack Already Empty");
  }
  else
  {
    ptr=Top;
    Top=Top->next;
    free(ptr);
  }
}
void Display()
{   
    printf("Elements in Stack are:");
    if(Top==NULL)
        printf("Nothing to Display");
    else if(Top->next==NULL)
        printf("%d",Top->data);
    else
   {
    while(Top!=NULL)
    {
       printf("%d ",Top->data);
       pop();
    }
   }
}
int main()
{
  push(34);
  push(32);
  pop();
  Display();
 
 return 0;
}

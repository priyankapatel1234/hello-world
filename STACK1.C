#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_STACK 10
#define NIL -1
typedef struct stacktype
{
 int a[MAX_STACK];
 int TOP;
 } stack;

void main()
{
int x, item, choice;
stack S1;

void PUSH(stack *, int);
int POP(stack *);
int isoverflow(stack *);
int isunderflow(stack *);
int PEEP(stack *);
S1.TOP=NIL;
clrscr();
while(1)
{

printf("Menu\n");
printf("\n 1.PUSH 2.POP 3.PEEP 4.Exit\n");
printf("enter your choice\n");
scanf("%d\n", &choice);
switch(choice)
{
case 1:
 x=isoverflow(&S1);
 if(x==1)
 {
 printf("Stack is getting Overflow\n");
 }
 else
 { scanf("%d", &item);
 printf("Enter the item to be pushed\n");

 PUSH(&S1, item);
 printf("Item is pushed\n");
 }
 break;
case 2:
 x= isunderflow(&S1);
 if(x==1)
 {
  printf("Stack is getting Underflow\n");
  }
 else
 {
  item= POP(&S1);
  printf("Poped element is=%d\n", item);
  }
 break;
case 3:
 x= isunderflow(&S1);
 if(x==1)
 {
  printf("Stack is getting Underflow\n");
  }
 else
 {
  item= PEEP(&S1);
  printf("Peeped element is=%d\n", item);
  }
 break;
case 4:
 exit(1);
default:
 printf("Entered choice is incorret\n");
 }
 getch();
 }
}/*Main closed*/

void PUSH(stack *P, int item)
{
 P-> TOP= P-> TOP+1;
 P-> a[P-> TOP]= item;
}
 int POP(stack *P)
 {
  int item;
  item= P-> TOP=(P-> TOP);
  P-> TOP= P-> TOP-1;
  return item;
 }

 int PEEP(stack *P)
 {
  int item;
  item= P-> TOP=(P-> TOP);
  return item;
 }

 int isoverflow(stack *P)
 {
  if(P-> TOP==MAX_STACK)
   return 1;
  else
   return 0;
  }

  int isunderflow(stack *P)
 {
  if(P-> TOP==NIL)
   return 1;
  else
   return 0;
  }
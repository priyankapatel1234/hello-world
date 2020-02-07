#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_STACK 10
#define NIL -1
typedef struct stacktype
{
int a[MAX_STACK];
int top;
}stack;

void main()
{
	clrscr();
	int item,choice,x;
	stack s1;
	s1.top=NIL;
	int l,r,s,a,b;
	void push(stack*,int);
	int pop(stack*);
	int is_underflow(stack*);
	int is_overflow(stack*);
	int peep(stack*);
	char postfix[100];
	while(1)
	{
		 printf("press 1 for push item in stack.\n");
		printf("press 2 for pop item from stack.\n");
		printf("press3 for showing item top in stack.\n");
		printf("press 4.for postfix.\n");
		printf("press5.for exit.\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				x=is_overflow(&s1);
				if(x==1)
				{
					printf("Stack is overflow");
				}
				else
				{
				  printf("\nenter the element to push into stack:");
				  scanf("%d",&item);
				  push(&s1,item);
				  printf("Element %d pushed into stack.",item);
				}
      break;
      }
    case 2:{
	 x=is_underflow(&s1);
	 if(x==1)
	 {
	 printf("Stack is empty");
	  }
	 else
	 {
	 item=pop(&s1);
	 printf("\nElement popped from stack = %d",item);
	 }
	 break;
	 }
	 case 3:{
	      item= peep(&s1);
	      if(item==-1)
		printf("Stack is empty.");
	      else
		 printf("Item at top of Stack is %d",item);
	      break;
	   }
	 case 4:
	       printf(" enter postfix evaluation");
	       scanf("%s",&postfix);
	       printf("%s",postfix);
	       for(l=0;postfix[l]!='\0';l++)
	       {
	       if(postfix[l]>='0' && postfix[l]<='9')
	       {
	       push(&s1,postfix[l]-48);
	       }
	       else
	       {
	       a=pop(&s1);
	       b=pop(&s1);
	       if(postfix[l]='+')
	       {
	       r=a+b;
	       push(&s1,r);
	       }
	       else if(postfix[l]='-')
	       {
	       r=a-b;
	       push(&s1,r);
	       }
	      else if(postfix[1]='/')
		{
	       r=a/b;

	      push(&s1,r);
	      }
	      else if(postfix[l]='*')
	      {
	      r=a*b;
	      push(&s1,r);


       }
       }
       }
       printf("result is %d",peep(&s1));

       break;
       case 5: exit(1);
}
      getch();

}
}
void push(stack *p,int item)
{
p->top=p->top+1;
p->a[p->top]=item;
}
int pop(stack *p)
{
int item;
item=p->a[p->top];
p->top=p->top-1;
return item;
}
int is_overflow(stack *p)
{
if(p->top==MAX_STACK-1)
   return 1;
else
   return 0;
}
 int is_underflow(stack *p)
 {
 if(p->top==NIL)
       return 1;
 else
       return 0;
 }
 int peep(stack *p)
 {
	if(p->top==NIL)
		return -1;
	else
		return p->a[p->top];

 }

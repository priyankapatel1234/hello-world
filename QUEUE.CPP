#include<stdio.h>
#include<conio.h>
#define max 10
#define nil -1
#include<process.h>

    typedef struct queuetype
    {
     int a[max];
     int front;
     int rear;
     }queue;

      void main()
      {
      int choice,item,x;
       queue q1;

       void insert(queue *,int);
       int deletion(queue *);
       int isfull(queue *);
       int isempty(queue *);


       while(1)
       {
	clrscr();
	printf("1.insert\n") ;
	printf("2.deletion\n");
	printf("3.exit\n");


	printf("enter your choice \n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	     x= isfull(&q1);

	     if(x==1)
	     {
	       printf("isfull");
	       }

	     else

	      printf("enter the item");
	      scanf("%d\n",&item);
	      insert(&q1,item);
	      printf("done");

	    break;
	 case 2:
		 x=isempty(&q1);

		 if(x==1)
		 {
		   printf("isempty\n ");
		   }

		   else
		   {
		    item=deletion(&q1);
		    printf("deletion is =%d",item);
		    printf("done");
		    }
		    break;



		  case 3:

		    exit(1);

	      default:
	      printf("error");

	      }
	      getch();
	      }
	      }



	    int isfull(queue *q)
	    {
	     if((q->front==0)&&(q->rear==max-1))
		return 1;
	     else
	     return 0;
	    }

		int isempty( queue *q)
		{
		 if((q->front==-1)&&(q->rear==-1))
		  return 1;
		  else
		   return 0;
		   }

		   void insert(queue *q,int item)
		   {
		    int i;
		    if((q->front==-1)&&(q->rear==-1))
		    {
		     q->front=q->front+1;
		     q->rear=q->rear+1;
		     }
		      else if(q->rear==max-1)
		       {
			for(i=q->front;i<=q->rear;i++)
			{
			 q->a[i-(q->front)]=q->a[i];
			 }
			 q->rear=q->rear-q->front;
			 q->front=0;
			 q->rear=q->rear+1;
			}
			 else
			 {
			  q->rear=q->rear+1;
			  }
			  q->a[q->rear]=item;
		   }

		     int deletion(queue *q)
		      {
		      int item;
		      item=q->a[q->front];
		      if(q->front==q->rear)
		      {
			q->front=q->rear=-1;
			}
			else
			q->front=q->front+1;
			return item;
			}
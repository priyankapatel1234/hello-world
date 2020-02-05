#include<stdio.h>
#include<conio.h>
#define max 10
#define nil -1
#include<process.h>

    typedef struct cqueuetype
    {
     int a[max];
     int front;
     int rear;
     }cqueue;

      void main()
      {
      int choice,item,x;
       cqueue cq;

       void insertcqueue(cqueue *,int);
       int deletioncqueue(cqueue *);
       int isfullcqueue(cqueue *);
       int isemptycqueue(cqueue *);


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
	     x= isfullcqueue(&cq);

	     if(x==1)
	     {
	       printf("isfull");
	       }

	     else

	      printf("enter the item");
	      scanf("%d\n",&item);
	      insertcqueue(&cq,item);
	      printf("done");

	    break;
	 case 2:
		 x=isemptycqueue(&cq);

		 if(x==1)
		 {
		   printf("isempty\n ");
		   }

		   else
		   {
		    item=deletioncqueue(&cq);
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



	    int isfullcqueue(cqueue *cq)
	    {
	     if((cq->front==0)&&(cq->rear==max-1)|| (cq->front - cq->rear==1))
		return 1;
	     else
	     return 0;
	    }

		int isemptycqueue( cqueue *cq)
		{
		 if((cq->front==-1)&&(cq->rear==-1))
		  return 1;
		  else
		   return 0;
		   }

		   void insertcqueue(cqueue *cq,int item)
		   {
		    int i;
		    if((cq->front==-1)&&(cq->rear==-1))
		    {
		     cq->front=cq->front+1;
		     cq->rear=cq->rear+1;
		     }
		      else if(cq->rear==max-1)
		       {
			cq->rear=0;
			}
			 else
			 {
			  cq->rear=cq->rear+1;
			  }
			  cq->a[cq->rear]=item;
		   }

		     int deletioncqueue(cqueue *cq)
		      {
		      int item;
		      item=cq->a[cq->front];
		      if(cq->front==cq->rear)
		      {
			cq->front=cq->rear=-1;
			}
			  else if(cq->front==max-1)
			   cq->front=0;
			else
			cq->front=cq->front+1;
			return item;
			}
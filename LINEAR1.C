#include<stdio.h>
#include<conio.h>
#include<process.h>

     void main()
     {
      int choice,array[5],n,item,loc,i;
      void getdata(int[],int);
      void putdata(int[],int);
      int linear_search(int[],int,int);
      int binary_search(int[],int,int);
	clrscr();

	   printf("enter the size of array");
      scanf("%d",&n);

      getdata(array,n);
 //     putdata(array,n);
      while(1)
      {

      printf("1 for linear search \n 2 for binary search\n 3 for exit");


      printf("\n enter your choice");
      scanf("%d",&choice);

      switch(choice)
      {
       case 1: printf("enter the number u want to search");
	       scanf("%d",&item);
	       loc=linear_search(array,n,item);
	     if(loc==-1)
	       printf("not found");
	       else
	       printf("found at loc %d ",loc);
	       break;

	case 2:printf("enter the number u want to search");
	       scanf("%d",&item);
	       loc=binary_search(array,n,item);
		if(loc==-1)
		printf("item  not");
		else
		printf(" found  at loc %d",loc);

	       break;
		case 3: exit(1);
       default:
	       printf("error input");
	       exit(1);
		 }
	    getch();
	    }
      }
       void getdata(int x[] ,int n)
	  {
	int i;
	 printf("enter the value of array");
	  for(i=0;i<n;i++)
	  {
	   scanf("%d",&x[i]);

	 }
	 }
	void putdata(int x[],int n)
	{
	 int i;
       for(i=0;i<n;i++)
       {
	scanf("%d",&x[i]);
	}

	}


	     int linear_search(int array[],int n,int item)
	      {
	       int i;
	       for(i=0;i<n;i++)
	       {
		if(array[i]==item)
		return i;
	       }
		return -1;
	      }

	 int binary_search(int array[],int n,int item)
	    {
	      int beg,end,mid;
	      beg=0;
	      end=n-1;
		while (beg<=end)
		  {
		    mid=(beg+ end)/2;
		    if(array[mid]==item)

			return mid;

		    else if (array[mid]>item)

		       end=mid-1;

		    else

		    beg=mid+1;
		     }
		    return -1;

	    }


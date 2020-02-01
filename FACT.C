#include<stdio.h>
#include<conio.h>
#include<process.h>

     void main()
     {
      int i, choice,n,f,f1,f2,f3,a,b;
       int fact( int n);
       int fib(int n);
       void TOH(int,char,char,char);
       int ackerman(int,int);
       int GCD(int ,int);

	while(1)
	{
	 clrscr();
	printf("1 for facttorial\n2");
	printf("2 for fibonanci \n3");
	printf("3.TOh\n");
	printf("4 Ackerman\n");
	printf("5 GCD\n");
	printf("6 for exit");
	printf("\nenter your choice\n");
	scanf("%d",&choice);
	  switch(choice)
	  {

	   case 1:
		  printf("Factorial\n");
		  printf("enter a number\n");
		  scanf("%d",&n);
		  f=fact(n);
		  printf("Factorial of %d",f);
		  break;

	   case 2:
		  printf("fibonanci\n");
		  printf("enter a number \n");
		  scanf("%d",&n);
		  f1= fib(n);
		  printf("fibonanic term%d",f1);
		  break;
	   case 3:
		  printf("TOH");
		  printf("enter no of disk");
		  scanf("%d",&n);
		  TOH(n,'A','B','C');
		  break;
	    case 4:printf("akckerman");
		   printf("enter the value of aand b");
		   scanf("%d%d",&a,&b);
		   f2=ackerman(a,b);
		   printf("Ackeman of a function is =%d",f2);
		   break;
	    case 5:
		   printf("GCD\n");
		   printf("enter the value of a and b");
		   scanf("%d%d",&a,&b);
		   f3=GCD(a,b);
		   printf("GCD of two number is= %d",f3);
		   break;
	    case 6:
		  exit(1);

	    default :
		    printf("wrong entry");

	     }

	     getch();
	     }
	     }

	   int   fact (int n)
	      {
	       if(n==0)
		{
		 return 1;
		 }
		  else
		   return n*fact(n-1);

	     }

	     int fib (int n)
	     {
	       if(n<3)
	       return n-1;
	       else
		return fib(n-1)+fib(n-2);
	     }

	     void TOH(int n,char a,char b,char c)
	     {
	     if(n==1)
	      printf("move %c to %c",a,b);
	      else
		  {
		    TOH(n-1,a,c,b);
		    printf("move %c to %c",a,b);
		    TOH(n-1,c,b,a);
		  }
	     }

	     int ackerman(int a,int b)
	     {
	       if(a==0)
		return b+1;
		 else if (a>0 &&b==0)
		  return ackerman (a-1,1);
		  else if (a>0 && b>0)
			  return ackerman(a-1,ackerman(a,b-1));
		  else
			return;
	      }

	   int GCD(int a,int b)
	      {
	       if(a==b)
	       return (a);
	       else if(a%b==0)
	       return(b);
	       else if(b%a==0)
	       return (a);
	       else if(a>b)
	       return (GCD(a%b,b));
	       else
	       return(GCD(a,b%a));
	      }
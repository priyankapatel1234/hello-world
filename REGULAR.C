#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e  0.001
#define f(x) x*x*x -4*x +1

 void main()
 {

   float x0,x1,x2 ;
    float f0,f1,f2;
    int i=0;
   printf("enter the value of x0 and x1");
   scanf("%f%f",&x0,&x1);
    do
     {
     f0=f(x0);
     f1=f(f1);

     x2=x0-((x1-x0)/(f1-f0))*f0;
     f2=f(x2);
     if(f0*f2<0)
      {
	x1=x2;
	f1=f2;
	}
	else
	  {
	  x0=x2;
	  f0=f2;
	  }
	  i++;

	  printf("no of iteration=%d\t",i);
	  printf("root=%f\t",x2);
	  printf("value of function=%f\n",f2);

	 } while(fabs(f2)>e);
	  getch();
	  }

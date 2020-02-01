#include<stdio.h>
#include<conio.h>
#include<process.h>
 //exit(1) function include header file process.h

     void main()
     {
      int array[5][5],array2[5][5],n,m,i,j,choice,array1[5][5],c,r1,c1;
      void getdata(int[5][5],int,int);    //declaring function for input data
      void putdata(int[5][5],int,int);
      void transpose(int[5][5],int ,int);
      void updiagonal(int[5][5],int ,int);
      void lowerdiagonal(int [5][5],int ,int);
      void addmatrix(int[5][5],int[5][5],int[5][5],int ,int);
      void submatrix(int[5][5],int[5][5],int[5][5],int ,int);
      void mulmatrix(int[5][5],int[5][5],int[5][5],int ,int,int);
       //declaring function for output data
       // declaring function for recursive bi ary search and complexity of binary search is order of O(n^2)
	clrscr();

      printf("enter the rows and colum of array1\n");
      scanf("%d%d",&n,&m);

      getdata(array,n,m);
      putdata(array,n,m);
       printf("enter the rows and colum of array2\n");
      scanf("%d%d",&r1,&c1);
      getdata(array1,r1,c1);
      putdata(array1,r1,c1);


       while(1)
       {
	printf("1 for transpose of matix\n");
	printf("2 for upper diagonal of matix\n");
	printf(" 3 for lower diagonal of matix\n");
	printf("4 for addition of matrix\n");
	printf("5 for substrection of matix\n");
	printf("6 for multiplication of matix\n");
	printf("7 for exit\n");
	 printf("\n enter your choice \n");
	 scanf("%d",&choice);
	  switch(choice)
	  {
	  case 1:
		 printf("transpose of matix");
		// getdata(array,n,m);
		 transpose(array, n, m);
		 break;
	   case 2:
		 printf("upper diagonal matix\n");
		 updiagonal(array,n,m);
		 break;
	    case 3:
		  printf("lower diagonal matix\n");
		  lowerdiagonal(array,n,m);
		  break;

	    case 4:printf("addition matix\n");
		  if((n==r1) && (m==c1))
		  {
		    addmatrix(array,array1,array2,n,m);
		    }
		    else
		    printf("error\n");
		    break;
	     case 5:printf("substraction matix\n");
		  if((n==r1) && (m==c1))
		  {
		    submatrix(array,array1,array2,n,m);
		    }
		    else
		    printf("error\n");
		    break;
	     case 6:printf("multiplication matix\n");
		  if((n==r1) && (m==c1))
		  {
		    mulmatrix(array,array1,array2,n,c1,m);
		    putdata(array2,n,c1);
		    }
		    else
		    printf("error\n");
		    break;


	  case 7:
	      exit(1);
	    default:
	     printf("error input\n");
	  }

	}

      }

      void getdata(int x[5][5] ,int n,int m)          //function definition for input data
	  {
	    int i,j;
	    printf("enter the value of array\n");
	    for(i=0;i<n;i++)
	     {
	     for(j=0;j<m;j++)
	     {

	     scanf("%d",&x[i][j]);
	     }
	   }
	   }
	void putdata(int x[5][5],int n,int m)       // function definition for output data
	  {
	    int i,j;
	    for(i=0;i<n;i++)
	     {
	      for(j=0;j<m;j++)
	      {
	     printf("%d\t",x[i][j]);
	     }
	     printf("\n");
	   }
	   }

	    void transpose( int x[5][5],int n,int m)
	    {
	      int i,j,c;
	       for(i=0;i<n;i++)
	       {
		for(j=0;j<m;j++)
		{
	       //	  printf("%d\t",x[j][i]);
		//  }
		c=x[i][j];
	       x[i][j]=x[j][i];
		x[j][i]=c;
		 printf("%d\t",x[j][i]);
		  }
		  printf("\n");
		  }
		  }
	    void updiagonal (int x[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {
	       if(i<=j)
	       {
	      //	printf("upper diagonal marix\n");
		printf("%d\t",x[i][j]);
		}
	      //	printf("\n");
		}
		}
		}

		 void lowerdiagonal (int x[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {
	       if(i>=j)
	       {
	      //	printf("upper diagonal marix\n");
		printf("%d\t",x[i][j]);
		}
	      //	printf("\n");
		}
		}
		}



  void addmatrix(int array[5][5],int array1[5][5],int array2[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {

		 array2[i][j]=array[i][j]+array1[i][j];

		 printf("%d\t",array2[i][j]);
		 }
		 }
		 }

      void submatrix(int array[5][5],int array1[5][5],int array2[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {

		 array2[i][j]=array[i][j]-array1[i][j];

		 printf("%d\t",array2[i][j]);
		 }
		 }
		 }
  void mulmatrix(int array[5][5],int array1[5][5],int array2[5][5],int n,int c1,int m)
	    {
	      int i,j,k;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<c1;j++)
	       {
		   array2[i][j]=0;
		   for(k=0;k<m;k++)
		   {
		   array2[i][j]=array[i][k]*array1[k][j];
		 printf("%d\t",array2[i][j]);
		 }
		 }
		 }
		 }

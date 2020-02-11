#include<stdio.h>
#include<conio.h>
 void mul(int (*f) (),int *);
 int (*f)(int);
  void main()
  {
  int x=10,munu;
  mul(munu,&x);
  getch();
 // clrscr();

  }
  void mul(int (*f) (int a),int *b)
  {
  int a;
  int value =(*f)(a);
  int mult=value * *b;
  printf("%d is the product",mult);

  }
  int munu(int m)
  {
  m=10;
  return(m);
  }

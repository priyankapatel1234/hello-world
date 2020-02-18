#include<stdio.h>
 int main()
 {
  int a=1,b=-1,c=0,d;
  d=++a&&++b||c--;
  if(d)
  printf("Kolktata\n");
  else if(c)
  printf("delhi\n");
  else
  printf("bangalore\n");
  return 0;
 }

#include<stdio.h>
 void main()
 {
 int k=8;// initially k=8;
 int x=0==1&&k++; //x=0==1 && k++; it will be execute as x=(0==1) && k++;
   //0==1 is false ; so false and anything will be false and 0 will be assigned to x.
   // so it will not check for second condition .hence k remains 8. output will be 0,8.
   printf("%d%d\n",x,k);
}

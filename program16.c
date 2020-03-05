#include<stdio.h>
int main()
{
int n,i;
unsigned long long result=1;
printf("enter any integer:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
result *=i;

}
printf("the output of the program is %llu",result);
return 0;
}

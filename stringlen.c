#include<stdio.h>
#include<string.h>

int main()
{
 char str[]="hello\0world\0";
 printf("%d",strlen(str));
 return 0;

}

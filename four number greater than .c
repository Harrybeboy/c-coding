

#include<stdio.h>
int main()
{
int w,x,y,z;
scanf("%d%d%d%d",&w,&x,&y,&z);
(w>x)? printf("W is greater"):(x>y)? printf("X is greater"):(y>z)? printf("Y is greater"):printf("Z is greater");
return 0;
}

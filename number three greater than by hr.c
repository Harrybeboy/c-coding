

#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
(x>y)? printf("X is greater"):(y>z)? printf("Y is greater"):printf("Z is greater");
return 0;
}

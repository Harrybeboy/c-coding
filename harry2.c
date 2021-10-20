
#include<stdio.h>
#include<math.h>
int main()
{
int num,x;
scanf("%d",&num);
x=num>>5;
printf("%d",x);
x=num<<5;
printf("%d",x);
x=(num<<5)-x;
printf("%d",x);
x=(num<<5)+x;
printf("%d",x);

printf("%d",~num);
return 0;
}

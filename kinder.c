#include<stdio.h>
#include<conio.h>
int main()
{
int a,x,c,i,j=1;
printf("Enter the n values:");
scanf("%d",&a);
printf("Enter the pair:");
scanf("%d",&c);
for(i=0;i<2*c;i++)
{
x=2*a-i;
if(c!=x)
{
printf("The pair is %d\n",c,j++,c);
}
}
return 0;
getch();
}

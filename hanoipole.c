#include<stdio.h>
#include<conio.h>
void hanoipole(int disc,char from,char cache,char to)
{
if(disc==1)
{
printf("\nThe %d disk moved from %c-->%c",disc,from,to);
return 0;
}
hanoipole(disc-1,from,to,cache);
printf("\nthe %d disk moved from %c-->%c",disc,from,to);
hanoipole(disc-1,cache,from,to);
}
int main()
{
int n;
char from='X',cache='Y',to='Z';
printf("enter nio of disk:");
scanf("%d",&n);
hanoipole(n,sr,temp,des);
}

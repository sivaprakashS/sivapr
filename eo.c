#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,d;
scanf("%d %d",&n,&m);
if(n>m)
{
	d=n-m;
}
else
{
d=m-n;	
}
if(d%2==0)
{
	printf("yes");
}
else
{
	printf("no");
}
getch()
}




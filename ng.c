#include<stdio.h>
int main()
{
	printf("\n enter the number":);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("%d",&c);
	return 0;
}

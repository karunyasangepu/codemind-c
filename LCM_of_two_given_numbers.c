#include<stdio.h>
int main()
{
	int a,b,m,i;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
	m=i*b;
	if(m%a==0)
	{
		printf("%d",m);
		break;
	}
}
}
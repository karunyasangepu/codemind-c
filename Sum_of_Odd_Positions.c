#include<stdio.h>
int main()
{
	int n,i,sum=0,oddsum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if(i%2!=0)
	{
		oddsum=oddsum+arr[i];
	}
}
		printf("%d",oddsum);

}

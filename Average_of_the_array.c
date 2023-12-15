#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,average;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
    sum=sum+arr[i];
    average=sum/n;
	}
        printf("%.2f",average);
    
}

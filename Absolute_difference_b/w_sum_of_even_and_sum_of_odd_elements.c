#include<stdio.h>
int main()
{
	int n,i,evensum=0,oddsum=0,difference;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	{
		evensum=evensum+arr[i];
	}
	else
	{
	    oddsum=oddsum+arr[i];
	}
}
       if(oddsum>evensum)
       {
		printf("%d",oddsum-evensum);
}
else
{
    printf("%d",evensum-oddsum);
}
}

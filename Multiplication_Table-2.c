#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}
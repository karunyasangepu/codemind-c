#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d%d%d",&X,&A,&B);
    if((A*1)+(B*2)>=X)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
#include<stdio.h>
int main()
{
    int p,phy,che,bio,mat,com;
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&com);
    p=(phy+che+bio+mat+com)/5;
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}
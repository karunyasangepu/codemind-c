#include<stdio.h>
int main()
{
    char s1[100];
    int lwr=0;
    scanf("%[^
]s",s1);
    int i=0;
    for(i=0;s1[i]!=NULL;i++)
    {
    if(s1[i]>='A' && s1[i]<='Z')
    {
        lwr++;
    }
  }
        printf("%d",lwr);
}
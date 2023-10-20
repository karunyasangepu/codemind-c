#include<stdio.h>
int main()
{
    int bs;
    float gs;
    scanf("%d",&bs);
    
    if(bs<=10000){
    
    gs=bs+((80*bs)/100)+((20*bs)/100);
    }
    
    else if(bs<=20000)
    {
    gs=bs+((90*bs)/100)+((25*bs)/100);
    }
    else 
    {
    gs=bs+((95*bs)/100)+((30*bs)/100);
    }
    printf("%.2f",gs);

}
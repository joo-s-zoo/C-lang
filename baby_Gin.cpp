#include<stdio.h>
int card[10];
int main()
{
    int baby_cnt=0;
    int tmp=0;
    for(int i=0; i<6; i++)
    {
        scanf("%d",&card[i]);
    }
    for(int i=0; i<6; i++)
    {
        if(card[i]>card[i+1])
        {
            tmp=card[i];
            card[i]=card[i+1];
            card[i+1]=tmp;
        }
    }
}
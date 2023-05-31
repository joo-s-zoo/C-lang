#include<stdio.h>
int score[1000];

int main()
{
    int man,sum=0,cnt=0,avg=0;
    double Onedread;
    scanf("%d",&man);

    for(int i=0; i<man; i++)
    {
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    avg=sum/man;

    for(int i=0; i<man; i++)
    {
        if(score[i]>avg)
        {
            cnt++;
        }
    }
    Onedread = (double)cnt / man*100;
    printf("%.3f%%",Onedread);
}
#include<stdio.h>
int bris[50];
int main()
{
    int sum=0,cnt=0;
    int bricks; //벽돌 무더기의 갯수 변수
    scanf("%d",&bricks);
    
    for(int i=0; i<bricks; i++)
    {
        scanf("%d",&bris[i]);
        sum+=bris[i];
    }
    sum=sum/bricks;
    for(int i=0; i<bricks; i++)
    {
        if(bris[i]>sum)
        {
            cnt+=bris[i]-sum;
        }
    }
    printf("The minimum number of moves is %d",cnt);
    
}
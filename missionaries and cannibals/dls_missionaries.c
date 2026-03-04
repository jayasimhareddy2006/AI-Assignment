#include <stdio.h>

int visited[4][4][2];

int valid(int m,int c)
{
    if(m<0 || c<0 || m>3 || c>3)
        return 0;

    if(m>0 && m<c)
        return 0;

    int mr=3-m;
    int cr=3-c;

    if(mr>0 && mr<cr)
        return 0;

    return 1;
}

void dls(int m,int c,int boat,int depth,int limit)
{
    if(depth>limit)
        return;

    if(!valid(m,c) || visited[m][c][boat])
        return;

    visited[m][c][boat]=1;

    printf("State: (%d,%d,%d) Depth=%d\n",m,c,boat,depth);

    if(m==0 && c==0 && boat==0)
    {
        printf("Goal reached\n");
        return;
    }

    int moves[5][2]={
        {1,0},
        {0,1},
        {2,0},
        {0,2},
        {1,1}
    };

    for(int i=0;i<5;i++)
    {
        if(boat==1)
            dls(m-moves[i][0],c-moves[i][1],0,depth+1,limit);
        else
            dls(m+moves[i][0],c+moves[i][1],1,depth+1,limit);
    }
}

int main()
{
    int limit=10;

    dls(3,3,1,0,limit);

    return 0;
}

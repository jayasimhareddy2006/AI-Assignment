#include <stdio.h>

int visited[4][4][2];

int valid(int m,int c)
{
    if(m<0 || c<0 || m>3 || c>3)
        return 0;

    if(m>0 && m<c)
        return 0;

    int mr = 3-m;
    int cr = 3-c;

    if(mr>0 && mr<cr)
        return 0;

    return 1;
}

void dfs(int m,int c,int boat)
{
    if(!valid(m,c) || visited[m][c][boat])
        return;

    visited[m][c][boat] = 1;

    printf("State: (%d,%d,%d)\n",m,c,boat);

    if(m==0 && c==0 && boat==0)
    {
        printf("Goal reached\n");
        return;
    }

    int moves[5][2] =
    {
        {1,0},
        {0,1},
        {2,0},
        {0,2},
        {1,1}
    };

    for(int i=0;i<5;i++)
    {
        if(boat==1)
            dfs(m-moves[i][0], c-moves[i][1], 0);
        else
            dfs(m+moves[i][0], c+moves[i][1], 1);
    }
}

int main()
{
    dfs(3,3,1);
    return 0;
}

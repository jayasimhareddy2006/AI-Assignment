#include <stdio.h>

typedef struct {
    int m,c,boat;
} State;

State queue[100];
int front=0,rear=0;

int visited[4][4][2];

int valid(int m,int c)
{
    if(m<0||c<0||m>3||c>3) return 0;
    if(m>0 && m<c) return 0;

    int mr=3-m, cr=3-c;
    if(mr>0 && mr<cr) return 0;

    return 1;
}

void enqueue(State s)
{
    queue[rear++]=s;
}

State dequeue()
{
    return queue[front++];
}

void bfs()
{
    State start={3,3,1};
    enqueue(start);
    visited[3][3][1]=1;

    int moves[5][2]={{1,0},{0,1},{2,0},{0,2},{1,1}};

    while(front<rear)
    {
        State s=dequeue();

        printf("(%d,%d,%d)\n",s.m,s.c,s.boat);

        if(s.m==0 && s.c==0 && s.boat==0)
        {
            printf("Goal reached\n");
            return;
        }

        for(int i=0;i<5;i++)
        {
            State next=s;

            if(s.boat==1)
            {
                next.m-=moves[i][0];
                next.c-=moves[i][1];
                next.boat=0;
            }
            else
            {
                next.m+=moves[i][0];
                next.c+=moves[i][1];
                next.boat=1;
            }

            if(valid(next.m,next.c) && !visited[next.m][next.c][next.boat])
            {
                visited[next.m][next.c][next.boat]=1;
                enqueue(next);
            }
        }
    }
}

int main()
{
    bfs();
}

#include <stdio.h>

typedef struct{
    int m,c,boat,cost;
} State;

State pq[100];
int size=0;

int visited[4][4][2];

int valid(int m,int c)
{
    if(m<0||c<0||m>3||c>3) return 0;

    if(m>0 && m<c) return 0;

    int mr=3-m,cr=3-c;

    if(mr>0 && mr<cr) return 0;

    return 1;
}

void push(State s)
{
    pq[size++]=s;
}

State pop()
{
    int min=0;

    for(int i=1;i<size;i++)
        if(pq[i].cost < pq[min].cost)
            min=i;

    State s=pq[min];

    pq[min]=pq[--size];

    return s;
}

void ucs()
{
    State start={3,3,1,0};

    push(start);

    int moves[5][2]={{1,0},{0,1},{2,0},{0,2},{1,1}};

    while(size>0)
    {
        State s=pop();

        if(visited[s.m][s.c][s.boat])
            continue;

        visited[s.m][s.c][s.boat]=1;

        printf("State: (%d,%d,%d) Cost=%d\n",s.m,s.c,s.boat,s.cost);

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

            next.cost=s.cost+1;

            if(valid(next.m,next.c))
                push(next);
        }
    }
}

int main()
{
    ucs();
}

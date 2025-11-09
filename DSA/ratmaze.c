#include<stdio.h>
/*
#define N 4

int maze[N][N] = {
    {1, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 1, 0, 0},
    {1, 1, 1, 1}
};
int visited[N][N]={0};
char path[100];
int pathlength=0;

void printmaze()
{
  path[pathlength]='\0';
  printf("%s\n",path);
}

void solve(int x,int y)
{
  if(x==N-1 && y==N-1)
  {
    printmaze();
    return;
  }
  if(x<0||y<0||x>=N||y>=N||maze[x][y]==0||visited[x][y]==1)
    return;
  
  visited[x][y]=1;

  path[pathlength++]='D';
  solve(x+1,y);
  pathlength--;

  path[pathlength++]='L';
  solve(x,y-1);
  pathlength--;

  path[pathlength++]='R';
  solve(x,y+1);
  pathlength--;

  path[pathlength++]='U';
  solve(x-1,y);
  pathlength--;

  visited[x][y]=0;

}

int main()
{
  solve(0,0);
  return 0;
}*/
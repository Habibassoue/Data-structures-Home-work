#include <stdio.h>

int g[4][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
int v[4];

void dfs(int s){
    v[s]=1;
    printf("%d ",s);
    for(int i=0;i<4;i++)
        if(g[s][i] && !v[i])
            dfs(i);
}

int main(){
    printf("DFS: ");
    dfs(0);
    return 0;
}

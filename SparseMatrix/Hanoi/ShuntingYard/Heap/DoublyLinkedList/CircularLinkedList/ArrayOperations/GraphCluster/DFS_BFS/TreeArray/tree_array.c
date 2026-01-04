#include <stdio.h>

int main(){
    int tree[7]={1,2,3,4,5,6,7};

    printf("Binary Tree (Array):\n");
    for(int i=0;i<7;i++)
        printf("Index %d: %d\n",i,tree[i]);

    return 0;
}

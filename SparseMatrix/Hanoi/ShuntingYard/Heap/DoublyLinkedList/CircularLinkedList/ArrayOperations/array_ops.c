#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5};
    int n=5;

    // insert at index 2
    for(int i=n;i>2;i--)
        a[i]=a[i-1];
    a[2]=99; n++;

    // delete index 3
    for(int i=3;i<n-1;i++)
        a[i]=a[i+1];
    n--;

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

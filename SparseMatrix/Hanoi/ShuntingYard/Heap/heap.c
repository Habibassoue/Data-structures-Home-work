#include <stdio.h>

void swap(int *a, int *b){
    int t=*a; *a=*b; *b=t;
}

void maxHeapify(int a[], int n, int i){
    int largest=i, l=2*i+1, r=2*i+2;
    if(l<n && a[l]>a[largest]) largest=l;
    if(r<n && a[r]>a[largest]) largest=r;
    if(largest!=i){
        swap(&a[i],&a[largest]);
        maxHeapify(a,n,largest);
    }
}

int main(){
    int a[]={3,5,9,6,8};
    int n=5;
    for(int i=n/2-1;i>=0;i--)
        maxHeapify(a,n,i);

    printf("Max Heap: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

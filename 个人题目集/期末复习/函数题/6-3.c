#include <stdio.h>
#define N 5
float Fun(int *p, int n,int *max);

int main()
{
    int a[10],i,max;
    int *pa=a;
    float ave;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    ave=Fun(pa,N,&max);
    printf("max=%d,average=%.2f",max,ave);
    return 0;
}

/* 请在这里填写答案 */

float Fun(int *p, int n,int *max) {
    float cache1, cache2 = 0;
    for(int i = 0; i < n; i++) {
        cache1 += *(p + i);
        if(cache2 < *(p + i)) {cache2 = *(p + i);}
    }

    *max = cache2;
    return cache1 / n;
}
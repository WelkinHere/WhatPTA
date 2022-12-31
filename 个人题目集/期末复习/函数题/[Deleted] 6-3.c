#include <stdio.h>
#define MAXN 10

int FindArrayMax(int a[], int n);

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("%d\n", FindArrayMax(a, n));
   
    return 0;
}

/* 请在这里填写答案 */

int FindArrayMax(int a[], int n) {
    int cache = 0;
    for(int i = 0; i < n; i++) {
        if(cache < a[i]) {
            cache = a[i];
        }
    }
    return cache;
}
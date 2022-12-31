#include <stdio.h>

int main() {
    // 通用函数池
    int cache1 = 0, cache2 = 0;

    // 输入部分
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 处理部分
    cache2 = a[0];

    for(int i = 0; i < n; i++) {
        if(cache1 < a[i]) {cache1 = a[i];}
        if(cache2 > a[i]) {cache2 = a[i];}
    }

    // 输出部分
    printf("max = %d\nmin = %d", cache1, cache2);
}
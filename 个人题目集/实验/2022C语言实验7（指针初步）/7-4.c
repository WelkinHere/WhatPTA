#include <stdio.h>

int main() {
    // 通用变量池
    static int cache;

    // 题目所给变量
    static int a[50];
    int *p = a;

    // 重复输入
    do {
        scanf("%d", *(p + cache));
        cache++;
    } while(cache < 49);

    for(int i = 49; i >= 0; i--) {
        if(*(p + i) != 0 && i != 0) {printf("%d ", *(p + i));}
        if(i == 0) {printf("%d", a[0]);}
    }
}
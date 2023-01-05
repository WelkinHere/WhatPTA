#include <stdio.h>

int main() {
    int M;  // 循环次数
    scanf("%d", &M);

    int N;  // 一次循环要几个数字
    scanf("%d", &N);

    int sum = 0;    // 计算总数

    for(int i = 0; i < M; i++) {
        int cache;  // 缓存值
        for(int l = 0; l < N; l++) {
            scanf("%d", &cache);
            sum += cache;
        }
        printf("%d\n", sum);
        sum = 0;
    }
}
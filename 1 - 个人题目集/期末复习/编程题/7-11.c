#include <stdio.h>

// 主函数
int main() {
    // 获取输入数字总数
    int N;
    scanf("%d", &N);

    int a[N];   // 这个数组用来存储用户输入

    // 用 for 循环逆序存入输入数字
    for (int i = N - 1; i >= 0; i--) {
        scanf("%d", &a[i]);
    }

    // 使用 for 循环正序输出存入的内容
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            printf("%d", a[i]);
        } else {
            printf(" %d", a[i]);
        }
    }
}
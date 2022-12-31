#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);

    // 处理部分
    if(x != 0) {
        x = 1 / x;
    }

    // 输出部分
    printf("%d", x);
}
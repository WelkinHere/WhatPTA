#include <stdio.h>
int main() {
    double x;
    scanf("%lf", &x);

    // 处理部分
    double ans;    // 存放答案的地方
    if(x != 0) {
        ans = 1 / x;
    }

    // 输出部分
    printf("f(%.1lf) = %.1lf\n", x, ans);
}

/*
 *  简单的条件判断。
 */
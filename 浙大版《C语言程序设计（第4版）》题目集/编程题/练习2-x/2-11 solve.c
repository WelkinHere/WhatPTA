#include <stdio.h>
#include <math.h>

int main() {
    double x;      // 题目所给输入
    scanf("%lf", &x);

    // 处理部分
    double ans;    // 存储答案
    if(x >= 0) {
        ans = sqrt(x);
    } else {
        ans = pow(x + 1, 2) + 2 * x + 1 / x;
    }

    // 输出部分
    printf("f(%.2lf) = %.2lf\n", x, ans);
}
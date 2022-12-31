#include <stdio.h>

int main() {
    double flag = 1;    // 正负号
    double sum = 0;     // 计算结果

    // 读取输入
    int N;
    scanf("%d", &N);

    // 使用 for 循环来进行循环计算
    for (double i = 1; i <= N; i++) {
        sum += flag * (i / ((i * 2) - 1));  // 这东西主要是找规律
        if(flag == 1) {flag = -1;} else {flag = 1;} // 每次循环后改变正负号
    }

    // 输出
    printf("%.3lf\n", sum);
}
#include <stdio.h>

int main() {
    // 输入部分
    int N;      //题目要求
    scanf("%d", &N);

    // 处理部分
    double flag = 1;       // 正负号
    double num = 1;        // 分母
    double sum = 0;     // 总和

    // 使用 for 循环来重复处理
    for(int i = 0; i < N; i++) {
        // 计算式
        sum += flag * (1 / num);

        // 正负号交换
        if(flag == 1.0) {flag = -1.0;} else {flag = 1.0;}

        // 分母处理
        num += 3;
    }

    // 输出部分
    printf("sum = %.3lf", sum);
}
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

/*
 *  这里用到了数学库 math.h 来完成这个题目
 *  
 *  sqrt() 函数:
 *  用途: 求取指定浮点值的平方根
 *  用法: sqrt(浮点值);
 *  
 *  pow() 函数:
 *  用途: 求取特定浮点值的指定次幂
 *  用法：pow(底数, 幂数);
 */
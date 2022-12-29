#include <stdio.h>
int main() {
    int A, B;   // 题目要求的两个输入
    scanf("%d%d", &A, &B);

    // 输出部分
    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d / %d = %d\n", A, B, A / B);
}

/*
 *  你可以在 printf() 里面塞计算式的, printf() 会把结果给你输出来
 */
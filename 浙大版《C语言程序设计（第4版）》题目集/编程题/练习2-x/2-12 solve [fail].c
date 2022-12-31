#include <stdio.h>

int main() {
    double lower;      // 输入的小值
    double upper;      // 输入的大值
    scanf("%lf%lf", &lower, &upper);

    // 变量部分
    double ansCelsius; // 输出的摄氏温度

    // 判断是否可以正常输出
    if(lower > upper) {
        // 不能正常输出时直接输出 "Invalid."
        printf("Invalid.");
    } else {
        // 输出部分
        printf("fahr celsius\n");

        // 处理并输出剩余的部分
        for(;lower <= upper;lower += 2) {
            ansCelsius = 5 * ((lower - 32) / 9);

            printf("%-5.0lf%-6.1lf\n", lower, ansCelsius);
        }
    }
}
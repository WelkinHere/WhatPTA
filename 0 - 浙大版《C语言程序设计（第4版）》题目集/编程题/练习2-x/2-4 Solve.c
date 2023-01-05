#include <stdio.h>
int main() {
    int fahr = 150; // 华氏温度
    int celsius;    // 摄氏温度

    // 进行计算
    celsius = 5 * (fahr - 32) / 9;

    // 输出答案
    printf("fahr = 150, celsius = %d", celsius);
}

/*
 *  第三行处的 fahr 在定义的时候就给赋值 150 了。
 *  
 *  第十行处的 printf 提示我们可以在输出内容里面引用变量。
 */
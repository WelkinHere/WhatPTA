#include <stdio.h>
int main() {
    // 输入部分
    int farh;       // 华氏温度
    scanf("%d", &farh);

    // 计算部分
    int celsius;    // 摄氏温度
    celsius = 5 * (farh - 32) / 9;

    // 输出部分
    printf("Celsius = %d", celsius);
}

/*
 *  首先有一个注意点, scanf() 在给变量赋值的时候一定要记得取那个变量的地址！
 *  就是在你赋值的变量名前面加个 & 号。
 *  不然会报错的，真的。
 *  
 *  当然，字符串除外。
 */
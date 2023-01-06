/*
 *  样例检查点不通过
 *  部分正确: 2/4
 */

#include <stdio.h>

int main() {
    // 循环次数录入
    int times;  // 循环次数
    scanf("%d", &times);

    // 存储奇数数值
    int a[times];       // 存储用数组
    int pos = 0;        // 存储录入位置

    // for 循环控制循环次数
    int flag = 0;       // 作为是否输出逗号的标志
    for(int i = 0; i < times; i++) {
        int input;      // 整数输入
        scanf("%d", &input);

        // 如果是奇数的话就直接输出
        if(input % 2 != 0) {
            if(flag == 0) {printf("%d", a[i]); flag = 1;} else {printf(",%d", a[i]);}
        }
    }
}
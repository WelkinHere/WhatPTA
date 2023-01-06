/*
 *  样例检查点通过
 *  部分正确: 2/4
 */

#include <stdio.h>

int main() {
    // 循环次数录入
    int times;  // 循环次数
    scanf("%d", &times);

    // 存储奇数数值
    int a[times];   // 存储用数组
    int pos = 0;        // 存储录入位置

    // for 循环控制循环次数
    for(int i = 0; i < times; i++) {
        int input;      // 整数输入
        scanf("%d", &input);

        // 如果是奇数的话就存储进去
        if(input % 2 != 0) {
            a[pos] = input;
            pos++;
        }
    }

    // 排序
    int flag = 0;   // 作为是否退出循环的标志
    int l = 0;      // 作为查询位置的标志
    do{
        if(a[l] > a [l + 1]) {
            int cache;
            cache = a[l];
            a[l] = a[l + 1];
            a[l + 1] = cache;
        } else {flag++;}

        if(l == pos - 2) {l = 0; flag = 0;} else {l++;}
    } while(flag < pos - 2);

    // for 循环控制输出
    for(int i = 0; i < pos; i++) {
        if(i == 0) {printf("%d", a[i]); flag = 1;} else {printf(",%d", a[i]);}
    }
}
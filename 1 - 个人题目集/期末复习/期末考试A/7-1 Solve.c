#include <stdio.h>

int main() {
    // 变量部分
    int amount;     // 加油量
    int type;       // 汽油品种
    char service;   // 服务类型
    double price;   // 总价格

    // 输入部分
    scanf("%d %d %c", &amount, &type, &service);

    // 处理部分
    if(type == 90) {
        price = amount * 6.95;
        if(service == 109) {
            price = price * 0.95;
        } else {
            price = price * 0.97;
        }
    } else if(type == 93) {
        price = amount * 7.44;
        if(service == 109) {
            price = price * 0.95;
        } else {
            price = price * 0.97;
        }
    } else {
        price = amount * 7.93;
        if(service == 109) {
            price = price * 0.95;
        } else {
            price = price * 0.97;
        }
    }

    // 输出部分
    printf("%.2lf", price);
}
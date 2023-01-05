#include <stdio.h>
#include <math.h>
int main() {
    double height;      // 下落高度
    double time;        // 下落用时
    double accelerate;  // 加速度

    // 变量初始化
    time = 3;           // 下落用时为 3s
    accelerate = 10;    // 加速度为 10m/s^2

    // 计算部分
    height = pow(time, 2) * accelerate / 2;

    // 输出部分
    printf("height = %.2lf", height);
}

/*
 *  这里用到了数学库 math.h 里面的 pow() 函数
 *  
 *  用法也挺简单的，就是 pow(底数, 幂数)
 *  
 *  懒一点可以直接把计算部分写成 height = time * time * accelerate / 2 的
 */
#include <stdio.h>

int main() {
    // 录入循环次数
    int N;                  // 循环次数
    scanf("%d", &N);

    // 外层 for 循环控制循环次数
    for(int i = 0; i < N; i++) {
        // 获取矩阵尺寸
        int size;           // 矩阵尺寸
        scanf("%d", &size);

        // 初始化
        int a[size][size];  // 存储矩阵用的二维数组

        // 录入数据
        // 外层 for 用来控制录入的是哪一行
        for(int i = 0; i < size; i++) {
            // 内层 for 用来控制录入行的第几个
            for(int l = 0; l < size; l++) {
                scanf("%d", &a[i][l]);
            }
        }

        // 检测是否满足条件
        int flag = 0;       // 标识符，如果为 0 则满足题目条件
        
        // for 循环来重复检测， 外层控制检测的是第几行
        for(int i = 1; i < size; i++) {
            // 内层的 for 控制检测的位置
            for(int l = 0; l < i; l++) {
                printf("Scaning [%d][%d], Value: %d", i, l, a[i][l])
                if(a[i][l] != 0) {flag = 1; break;}
            }

            if(flag == 1) {break;}
        }

        // 输出结果
        if(flag == 0) {printf("YES\n");} else {printf("NO\n");}
    }
}
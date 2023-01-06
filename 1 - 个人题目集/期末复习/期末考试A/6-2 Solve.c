/*
 *  样例检查点通过
 *
 *  部分正确: 3/4 检查点通过
 */

// 确认整数 p 是否为素数
int prime(int p) {
    int flag = 1;   // 标识符，是素数则为 1 , 不是则为 0 .

    // 使用 for 循环遍历全部数字
    for(int i = 2; i < p; i++) {
        if(p % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}

// 题目要求的 哥德巴赫猜想 函数
void Goldbach(int n) {
    int primeMin = 0;   // 存储较小素数
    int primeMax = 0;   // 存储较大素数

    int exit = 0;       // 退出下面循环的标识符

    // 外层 for 循环查找满足猜想的较小素数
    for(int i = 2; i < n; i++) {
        if(prime(i) == 1) {
            for(int l = n - 1; l > primeMin; l--) {
                if(prime(l) == 1 && i + l == n) {
                    primeMin = i;
                    primeMax = l;
                    exit = 1;
                    break;
                }
            }
        }

        if(exit == 1) {break;}
    }

    // 输出
    printf("%d=%d+%d", n, primeMin, primeMax);
}
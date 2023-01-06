void fun(int n, int *m) {
    // 变量
    int sum = 0;    // 总和
    int cache;      // 缓存

    // 处理部分
    // 使用 for 循环进行处理
    for(int i = 2; i < n; i++) {
        // 内层的 for 循环用来查找外层检测的这个数字是否为因子
        for(int l = 1; l <= n; l++) {
            if(i * l == n) {
                sum += i + l;
            }
        }
    }

    // 由于刚才的处理方法过于暴力，以至于所有的情况下 sum 都会是正确答案的两倍
    // 所以我们在这里进行修正
    sum = sum / 2;

    // 函数返回部分
    *m = sum;
}
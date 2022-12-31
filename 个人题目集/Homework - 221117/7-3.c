#include <stdio.H>
int main() {
    // 通用变量池
    int cache, sum;

    // 题目所给的次数和行数
    int m,n;
    scanf("%d%d", &m, &n);

    // 主体部分
    for(int i = 0; i < m; i++) {
        // 简单的 for 循环来接受输入并计算求和
        for(int loop = 0; loop < n; loop++) {
            scanf("%d", &cache);
            sum += cache;
        }

        // 输出这一轮的计算结果
        printf("%d\n", sum);

        //把这轮计算结果清除一下，方便下一次使用
        sum = 0;
    }
}
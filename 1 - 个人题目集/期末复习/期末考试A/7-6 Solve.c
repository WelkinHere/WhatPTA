/*
 *  样例检查点通过
 *  部分正确: 2/3
 */

#include <stdio.h>
struct example {
    char ID[11];    // 学号，长度上限为10
    char name[11];  // 姓名，长度上限为10
    int s1, s2, s3; // 三门课的考试成绩
    int sum;        // 总分
};

int main() {
    // 录入次数
    int n;      // 学生数量
    scanf("%d", &n);

    // 初始化一个结构体数组，用来存储数据
    struct example std[n];

    // 录入学生数据并进行处理
    int highScore = -1;      // 存储最高分
    int highPos = -1;        // 存储最高分学生位置
    for(int i = 0; i < n; i++) {
        // 录入部分
        scanf("%s %s %d %d %d", std[i].ID, std[i].name, &std[i].s1, &std[i].s2, &std[i].s3);

        // 处理部分
        std[i].sum = std[i].s1 + std[i].s2 + std[i].s3;

        // 判断是否为最高分
        if(highScore <= std[i].sum) {
            highScore = std[i].sum;
            highPos = i;
        }
    }

    // 输出部分
    printf("%s %s %d", std[highPos].ID, std[highPos].name, std[highPos].sum);
}
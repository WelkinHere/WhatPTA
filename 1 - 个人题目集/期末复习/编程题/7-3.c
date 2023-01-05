#include <stdio.h>

int main() {
    // 通用变量池
    double cache;
    
    // 题目所给变量
    int a, b, c = 0;
    
    // 输入处理部分
    scanf("%d %d %c", &a, &b, &c);
    
    // 初步计算
    switch(b) {
        case 90 :
            cache = a * 6.95;
            break;
        case 93 :
            cache = a * 7.44;
            break;
        case 97 :
            cache = a * 7.93;
            break;
    }

    if(c == 109){
        printf("%.2lf\n", cache*0.95);
    } else {
        printf("%.2lf\n", cache*0.97);
    }
}
#include <stdio.h>

int main() {
    int a;  // 存放读取的字符

    do {
        // 使用 getchar 来读取单个字符
        a = getchar();

        // 转换区
        printf("%c ", a);
    } while (a != 10);
}
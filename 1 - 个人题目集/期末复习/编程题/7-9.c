#include <stdio.h>

int main() {
    int a;  // 存储读入的字符

    // 使用 do while 循环来重复执行操作
    do {
        a = getchar();
        if(a >= 65 && a < 90) {
            a = a + 33;
        } else if(a == 90) {
            a = 97;
        } else if(a >= 97 && a < 122) {
            a = a - 31;
        } else if(a == 122) {
            a = 65;
        }
        printf("%c", a);
    } while (a != 10);  // 循环的执行条件是 “读入的下一个字符不是回车” （a != 10）
}
#include <stdio.h>
int main()
{
    int input;
    
    scanf("%d",&input);
    
    //简单的计算，把输入整除了
    input = input % 2;

    //用三元判断符来进行不同情况的输出
    (input != 0)?printf("%d是奇数", input):printf("%d是偶数", input);
    return 0;
}
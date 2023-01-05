#include<stdio.h>
//自定函数，用于计算阶乘
//返回 int 值
int factor(int in)
{
    if(in == 0) {return 0;}
    else{
        int out = 1;
        for(int Loop = 1; Loop <= in; Loop++){
            out = out * Loop;
        }
        return out;
    }
}

int main()
{
    //输入部分
    int in;
    scanf("%d", &in);
    
    //输出部分
    printf("%d", factor(in));
    return 0;
}
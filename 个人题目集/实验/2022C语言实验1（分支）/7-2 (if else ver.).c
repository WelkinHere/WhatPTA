#include <stdio.h>
int main()
{
    int level;
    double amount, price;
    
    scanf("%d%lf", &level, &amount);

    //前面都和原来一样
    //这里开始用 if else 来做条件判断
    if(level == 1 || level == 2 || level == 3)
    {
        //这里用三元运算符套娃来进行分类
        (level == 1)?price = amount * 4.68:(level == 2)?price = amount * 6.26:price = amount * 8.16;;
        printf("%.2lf",price);
    }
    else
    {
        printf("Not available!");
    }
     return 0;
}
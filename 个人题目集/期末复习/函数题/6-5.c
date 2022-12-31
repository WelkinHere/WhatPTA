#include<stdio.h>
int fun(int a,int b);
int main()
{ int num1,num2,a;
 scanf("%d%d",&num1,&num2);
 a=fun(num1,num2);
 printf("the maximum common divisor is %d\n",a);
 return 0;
}

/* 请在这里填写答案 */

int fun(int a, int b) {
    if(a == b) {
        return a;
    } else if(a > b) {
        return fun(a - b, b);
    } else if(a < b) {
        return fun(a, b - a);
    }
}

// 这里用的算法是《九章算术》的 **更相减损术**
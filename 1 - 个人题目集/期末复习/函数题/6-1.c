#include <stdio.h>
void fun(int n,int *m);
int main()
{
 int s,n;
 scanf("%d",&n);
 fun(n,&s);
 printf("%d\n",s);
 return 0;
 }

/* 请在这里填写答案 */

// n 是输入，*m 是返回值
void fun(int n, int *m) {
    int l = 0;
    for(int i = 2;i < n; i++) {
        if(n % i == 0) {
            l += i;
        }
    }
    *m = l;
}
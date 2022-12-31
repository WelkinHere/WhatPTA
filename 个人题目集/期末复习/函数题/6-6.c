#include<stdio.h>
void sort(int *x,int n);
int main ( )
{int *p,i,a[10];
 p=a;
 for (i=0;i<10;i++)  scanf("%d",p++);
 p=a;
 sort(a,10);
 for(i=0;i<10;i++)  printf("%4d",*p++);
 printf("\n");
 return 0;
 }

/* 请在这里填写答案 */

void sort(int *x,int n) {
    static int cache, flag;
    for(int i = 0; flag < n - 2; i++) {
        if(*(x + i) < *(x + i + 1)) {
            cache = *(x + i);
            *(x + i) = *(x + i + 1);
            *(x + i + 1) = cache;
        } else {
            flag++;
        }

        if(i == n - 2) {i = -1; flag = 0;};
    }
}
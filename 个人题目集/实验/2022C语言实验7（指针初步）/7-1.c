#include<stdio.h>
int main() {
    int a,b,t;
    int *pa,*pb;
    pa=&a; pb=&b;
    
    scanf("%d%d", &a, &b);
    
    printf("a=%d,b=%d\n",*pa,*pb);
    t=*pa;  *pa=*pb;  *pb=t;
    printf("a=%d,b=%d\n",a,b);
    return 0;    
}
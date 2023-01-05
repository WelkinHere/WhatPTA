#include<stdio.h>

//自定函数，用于判断是否为素数
//无返回值
//利用素数筛
int prime(int in)
{
    for(int i=m-1;i>1;i--)   
    {       
        for(k=2;k<i;k++)       
        {            
            if(i%k==0)            
            break;        
        }       
        if(k>=i)        
        {        
        printf("%6d",i);// %6d和%06d都是占六位，如果不足六位      
        cnt++;            //一个前面补充空格，一个补充0
        }         
    }

int main()
{
    int times = 0;
    scanf("%d", &times);
    for(int Loop = 1; Loop <= times; Loop++){
        int num;
        scanf("%d", &num);
        prime(num);
    }
}
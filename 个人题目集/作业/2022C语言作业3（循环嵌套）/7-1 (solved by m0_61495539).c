#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,N;
	int sum=0,num;
	scanf("%d",&N);
	n=pow(10,N);
    int a[10][10];
    for(int i = 1;i <10;i++)
    {
        a[i][0] = 1;
    }
    for(int i = 0;i <10;i++)
    {
        for(int j = 3;j <= 7;j++)
        {
            a[i][j] = pow(i,j);
        }
    }
	for(i=pow(10,N-1);i<n;i++) 
	{
		num=i;
        sum = 0;
		while(num>0)
		{
			sum=sum+a[num%10][N];
			num/=10;
		}
        if(sum == i)
        {
		    printf("%d\n",i);
	    }
	}
	return 0;
} 
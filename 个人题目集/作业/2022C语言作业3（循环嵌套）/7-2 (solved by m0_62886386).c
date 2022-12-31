#include<stdio.h>//输出三角形字符阵列 
int main(void)
{
	char ch='A';
	int n;
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch+=1;
		}
		printf("\n");
	}
	return 0;
}
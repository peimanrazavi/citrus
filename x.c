#include<stdio.h>
int power(int a, int b)
{
	int temp = 1;
	while(b > 0)
	{
		temp *= a;
		b--;
	}
	printf("%d", temp);
}
int main()
{
	int a, b;
	scanf("%d %d", &a , &b);
	power(a, b);
}
/*2.4.4��������100��1000����ƽ����֮��*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	double sum;
	sum=0;
	for(i=100;i<=1000;i++) sum=sum+sqrt(i);
	printf("sum=%.2f",sum);
	return 0;
}
//#include<iostream>
//bool prime_number(int n)
//{
//	for (int i = 2; i <= n/2; i++)//利用n/2可以减少计算量
//	{
//		if (n % i == 0)//利用求余数来判断是否可以被除了自身以外的大于2的整数整除
//			return false;
//	}
//	return true;
//}
//int main(void)
//{
//	int n;
//	bool A;//布尔函数判断输出结果
//	printf("请输入大于1的自然数 n = ");
//	scanf_s("%d", &n);
//	A = prime_number(n);
//	if (A)
//		printf("%d是素数。",n);
//	else printf("%d不是素数", n);
//	return 0;
//}
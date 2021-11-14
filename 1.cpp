//#include<iostream>
//using namespace std;
//int glc(int a, int b)//glc为最大公因数,建立求glc的函数
//{
//	int i=0, g = 0;
//	int m = 0;
//	m = a > b ? b : a;
//	for (i = 1; i <= m; i++)
//	{
//		if(a%i==0 && b%i==0)//利用求余函数判断是否为因数，借助循环求解glc
//		{
//			g = i;
//		}
//	}
//	return g;
//}
//int lcm(int a, int b)//lcm为最小公倍数，建立求lcm的函数
//{
//	return a*b/glc(a,b);
//}
//int main()
//{
//	int a = 0, b = 0;
//	int p, q;
//	printf("请输入两个整数，分别为：");
//	scanf_s("%d%d", &a, &b);
//	p = glc(a, b);//引用函数glc
//	q = lcm(a, b);//引用函数lcm
//	printf("最大公因数为%d\n", p);
//	printf("最小公倍数为%d\n", q);
//	return 0;
//}
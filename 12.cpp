//#include<iostream>
//#include<cmath>
//using namespace std;
//float solut(int a, int b, int c, int d)
//{
//	float x = 1, x0, f, f1;
//	do
//	{
//		x0 = x;
//		f = ((a * x0 + b) * x0 + c) * x0 + d;
//		f1 = (3 * a * x0 + 2 * b) * x0 + c;
//		x = x0 - f / f1;
//	} while (fabs(x - x0) >= 1e-3);
//	return(x);
//}
//int main(void)
//{
//	int a, b, c, d;
//	printf("请依次输入系数a,b,c,d:\n");
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//	scanf_s("%d", &d);
//	printf("x=%10.7f", solut(a, b, c, d));
//	return 0;
//}
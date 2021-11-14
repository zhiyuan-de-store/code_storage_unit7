//#include<iostream>
//double polya(int n, int x)
//{
//	double result;
//	if (n == 0)
//		result = 1;
//	if (n == 1)
//		result = x;
//	if (n > 1)
//		result = ((2 * n - 1) * x * polya(n - 1, x) - (n - 1) * polya(n - 2, x)) / n;
//	return result;
//}
//int main()
//{
//	double x, n;
//	scanf_s("%lf %lf", &n, &x);
//	printf("%.2lf\n", polya(n, x));
//	return 0;
//}

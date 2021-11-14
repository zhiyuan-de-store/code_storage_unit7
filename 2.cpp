//#include<iostream>
//#include<cmath>
//float x1, x2,disc, p, q;//disc表示b*b-4*a*c
//void bigger(float a, float b)//求b*b-4*a*c大于0时，求解两个不同的实数根
//{
//	x1 = p + q;
//	x2 = p - q;
//	printf("方程的根为x1=%f,x2=%f", x1, x2);
//}
//void equal(float a, float b)//求b*b-4*a*c等于0时，求解两个相同的实数根
//{
//	float d = (-b) / (2 * a);
//	printf("方程的根为x1=x2=%f", d);
//}
//void smaller(float a, float b, float c)
//{
//	printf("该方程没有实数根\n则其根为x1=%f+%f i\nx2=%f-%f i", p, q, p, q);
//}
//int main(void)
//{
//	float a, b, c;
//	scanf_s("%f%f%f", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	float m = abs(disc);//转化成绝对值，便于求解b*b-4*a*c小于0时，求解虚根
//	m = sqrt(m);
//	p = (-b) / (2 * a);
//	q = m / (2 * a);
//	if (disc > 0)
//	{
//		bigger(a, b);
//	}
//	else if (disc == 0)
//	{
//		equal(a, b);
//	}
//	else smaller(a, b, c);
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//float x1, x2,disc, p, q;//disc��ʾb*b-4*a*c
//void bigger(float a, float b)//��b*b-4*a*c����0ʱ�����������ͬ��ʵ����
//{
//	x1 = p + q;
//	x2 = p - q;
//	printf("���̵ĸ�Ϊx1=%f,x2=%f", x1, x2);
//}
//void equal(float a, float b)//��b*b-4*a*c����0ʱ�����������ͬ��ʵ����
//{
//	float d = (-b) / (2 * a);
//	printf("���̵ĸ�Ϊx1=x2=%f", d);
//}
//void smaller(float a, float b, float c)
//{
//	printf("�÷���û��ʵ����\n�����Ϊx1=%f+%f i\nx2=%f-%f i", p, q, p, q);
//}
//int main(void)
//{
//	float a, b, c;
//	scanf_s("%f%f%f", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	float m = abs(disc);//ת���ɾ���ֵ���������b*b-4*a*cС��0ʱ��������
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
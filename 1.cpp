//#include<iostream>
//using namespace std;
//int glc(int a, int b)//glcΪ�������,������glc�ĺ���
//{
//	int i=0, g = 0;
//	int m = 0;
//	m = a > b ? b : a;
//	for (i = 1; i <= m; i++)
//	{
//		if(a%i==0 && b%i==0)//�������ຯ���ж��Ƿ�Ϊ����������ѭ�����glc
//		{
//			g = i;
//		}
//	}
//	return g;
//}
//int lcm(int a, int b)//lcmΪ��С��������������lcm�ĺ���
//{
//	return a*b/glc(a,b);
//}
//int main()
//{
//	int a = 0, b = 0;
//	int p, q;
//	printf("�����������������ֱ�Ϊ��");
//	scanf_s("%d%d", &a, &b);
//	p = glc(a, b);//���ú���glc
//	q = lcm(a, b);//���ú���lcm
//	printf("�������Ϊ%d\n", p);
//	printf("��С������Ϊ%d\n", q);
//	return 0;
//}
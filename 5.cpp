//#include<iostream>
//using namespace std;
//void Reversed_string(char str[])
//{
//	int start, end;
//	char tmp;
//	start = 0;
//	end = strlen(str) - 1; //�ַ�����С���0��ʼ������-1��strlenΪһ�������ָ���ַ����ĳ���
//	while (start < end)
//	{
//		tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//
//		start++;
//		end--;
//	}
//}
//int main(void)
//{
//	char str[100] = { 0 };
//	printf("������һ�ַ�����\n");
//	gets_s(str);
//	Reversed_string(str);
//	printf("�����ַ���Ϊ��\n%s",str);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void typ(char str[], char c[])
//{
//	int i, j;
//	for (i = 0,j=0; str[i] != '\0'; i++)
//	{
//		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
//			str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
//			str[i] == 'u' || str[i] == 'U')//�ж�ĳһ��ĸ�Ƿ�ΪԪ����ĸ
//		{
//			c[j] = str[i];
//			j++;
//		}
//	}
//	c[j] = '\0';
//}
//int main(void)
//{
//	char str[99], c[99];
//	printf("�������ַ���str:");
//	gets_s(str);
//	typ(str, c);//��str��Ԫ����ĸ���Ƶ�c��
//	printf("����Ԫ����ĸ�У�%s", c);
//	return 0;
//}
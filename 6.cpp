//#include<iostream>
//using namespace std;
//void contwostring(char str1[], char str2[], char str[])
//{
//	int i, j = 0;
//	for (i = 0; str1[i] != '\0'; i++)//��str1������Ƶ�str
//		str[i] = str1[i];
//	for (j = 0; str2[j] != '\0'; j++)//��str2������Ƶ�str��i���ַ�֮��
//		str[i + j] = str2[j];
//	str[i + j] = '\0';
//}
//
//int main(void)
//{
//	char str1[100] = { 0 }, str2[100] = { 0 }, str[200] = { 0 };//�����ַ���
//	printf("�����ַ���str1:");
//	gets_s(str1);
//	printf("�����ַ���str2:");
//	gets_s(str2);
//	contwostring(str1, str2, str);
//	printf("�����ַ���Ϊ:%s", str);
//	return 0;
//}
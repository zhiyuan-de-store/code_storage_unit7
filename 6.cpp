//#include<iostream>
//using namespace std;
//void contwostring(char str1[], char str2[], char str[])
//{
//	int i, j = 0;
//	for (i = 0; str1[i] != '\0'; i++)//将str1逐个复制到str
//		str[i] = str1[i];
//	for (j = 0; str2[j] != '\0'; j++)//将str2逐个复制到str第i个字符之后
//		str[i + j] = str2[j];
//	str[i + j] = '\0';
//}
//
//int main(void)
//{
//	char str1[100] = { 0 }, str2[100] = { 0 }, str[200] = { 0 };//声明字符串
//	printf("输入字符串str1:");
//	gets_s(str1);
//	printf("输入字符串str2:");
//	gets_s(str2);
//	contwostring(str1, str2, str);
//	printf("连接字符串为:%s", str);
//	return 0;
//}
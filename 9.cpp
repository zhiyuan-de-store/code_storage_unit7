//#include<iostream>
//using namespace std;
//int letter, digit, space, other;
//void Countcharnum(char str[])
//{
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
//			letter++;
//		else if (str[i] >= '0' && str[i] <= '9')
//			digit++;
//		else if (str[i] == ' ')
//			space++;
//		else other++;
//}
//int main(void)
//{
//	char str[100] = { 0 };
//	printf("请输入字符串：");
//	gets_s(str);
//	Countcharnum(str);
//	printf("统计结果为\n字母个数：%d\n数字个数：%d\n空格个数：%d\n其他个数：%d\n", letter, digit, space, other);
//	return 0;
//}
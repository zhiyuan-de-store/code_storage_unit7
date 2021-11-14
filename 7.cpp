//#include<iostream>
//using namespace std;
//void typ(char str[], char c[])
//{
//	int i, j;
//	for (i = 0,j=0; str[i] != '\0'; i++)
//	{
//		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
//			str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
//			str[i] == 'u' || str[i] == 'U')//判断某一字母是否为元音字母
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
//	printf("请输入字符串str:");
//	gets_s(str);
//	typ(str, c);//将str中元音字母复制到c中
//	printf("其中元音字母有：%s", c);
//	return 0;
//}
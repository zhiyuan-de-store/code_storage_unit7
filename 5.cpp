//#include<iostream>
//using namespace std;
//void Reversed_string(char str[])
//{
//	int start, end;
//	char tmp;
//	start = 0;
//	end = strlen(str) - 1; //字符数组小标从0开始，所以-1；strlen为一函数求解指定字符串的长度
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
//	printf("请输入一字符串：\n");
//	gets_s(str);
//	Reversed_string(str);
//	printf("反序字符串为：\n%s",str);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void BubbleSort(char str[])
//{
//	int i, j;
//	char tmp;
//	int len = strlen(str);
//	for (i = 0; i < len - 1; ++i)
//	{
//		for (j = 0; j < len - i - 1; ++j)
//		{
//			if (str[j] > str[j + 1])
//			{
//				tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	char str[11] = { 0 };
//	printf("请输入10个字符：\n");
//	gets_s(str);
//	BubbleSort(str);
//	printf("按照从小到大的排序为：%s", str);
//}
//#include<iostream>
//using namespace std;
//void PrintArry(int arr[3][3])//输出3*3二维整型数组的函数
//{
//	printf("二维数组为：\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print_transpose_Arry(int arr[3][3])//转置3*3二维整型数组的函数
//{
//	int tmp;
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (i != j) //中间数不发生变化
//			{//交换两个数
//				tmp = arr[i][j];
//				arr[i][j] = arr[j][i];
//				arr[j][i] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { 0 };//声明数组
//	//PutArry(arr);//输入数组
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)//输入第i+1行的数据
//			scanf_s("%3d", &arr[i][j]);//输入第i+1行的第j+1列的数据
//	PrintArry(arr);//输出数组
//	Print_transpose_Arry(arr);//转置数组
//	printf("转置数组");
//	PrintArry(arr);//输出转置后的数组
//	return 0;
//}
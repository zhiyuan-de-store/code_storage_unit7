//#include<iostream>
//using namespace std;
//void PrintArry(int arr[3][3])//���3*3��ά��������ĺ���
//{
//	printf("��ά����Ϊ��\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print_transpose_Arry(int arr[3][3])//ת��3*3��ά��������ĺ���
//{
//	int tmp;
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (i != j) //�м����������仯
//			{//����������
//				tmp = arr[i][j];
//				arr[i][j] = arr[j][i];
//				arr[j][i] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { 0 };//��������
//	//PutArry(arr);//��������
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)//�����i+1�е�����
//			scanf_s("%3d", &arr[i][j]);//�����i+1�еĵ�j+1�е�����
//	PrintArry(arr);//�������
//	Print_transpose_Arry(arr);//ת������
//	printf("ת������");
//	PrintArry(arr);//���ת�ú������
//	return 0;
//}
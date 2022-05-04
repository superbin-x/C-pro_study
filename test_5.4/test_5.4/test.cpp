#include <iostream>
#include <string>
using namespace std;


////数组元素逆置:首尾互换
//int main()
//{
//	int arr[5] = { 1,5,4,8,9 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	cout << "逆置前" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << endl;
//	cout << "逆置后" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

////冒泡排序
//int main()
//{
//	int arr[] = { 1,23,5,7,8,56,3,9,54,6,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	cout << "冒泡排序前" << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " " << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << "冒泡排序后" << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " " << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//二维数组
//int main()
//{
//	//二维数组定义
//	int arr[3][4];
//	int arr1[3][4] = { 1,2,4,5,6,8,7,8 };
//	int arr2[3][4] = 
//	{ 
//		{1,2,4},
//		{5,6,8},
//		{7,8}
//	};
//	//二维数组输出：外层循环打印行数，内层循环打印列数
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	//二维数组数组名：
//	//1.查看二维数组占用空间大小 sizeof(数组名) 
//	//2.查看二维数组首地址
//	int arr0[3][4] =
//	{
//		{1,2,4},
//		{5,6,8},
//		{7,8}
//	};
//	cout << "arr0:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "二维数组占用空间: " << sizeof(arr0) << endl;
//	cout << "二维数组第一行占用空间: " << sizeof(arr0[0]) << endl;
//	cout << "二维数组第一个元素占用空间: " << sizeof(arr0[0][0]) << endl;
//	cout << "二维数组行数：" << sizeof(arr0) / sizeof(arr0[0]) << endl;
//	cout << "二维数组列数：" << sizeof(arr0[0]) / sizeof(arr0[0][0]) << endl;
//
//	cout << "二维数组首地址：" << arr << endl;
//	cout << "第一个元素首地址：" << &arr[0][0] << endl;
//	cout << "第一行首地址：" << arr[0] << endl;
//	cout << "第二行首地址：" << arr[1] << endl;
//	system("pause");
//	return 0;
//}

//二维数组：考试成绩统计

int main()
{
	string str[5] = { "  ","语文","数学","英语","总分" };
	for(int i = 0; i < 5;i++ )
	{
		cout << " " << str[i] << " ";
	}
	cout << endl;
	string names[3] = { "张三","李四","王五" };
	int scores[3][3] =
	{
		{78,86,99},
		{85,95,60},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++)
	{
		int sum1 = 0;
		cout << names[i]<<"  ";
		for (int j = 0; j < 3; j++)
		{
			cout << " " << scores[i][j] << "  ";
			sum1 = sum1 + scores[i][j];
		}
		cout << "  " << sum1 << endl;
	}
	system("pause");
	return 0;
}
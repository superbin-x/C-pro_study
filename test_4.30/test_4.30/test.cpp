#include <iostream>
using namespace std;
//一维数组
//int main()
//{
//	//三种定义方式
//	//数组下标从0开始
//	int arr[5];
//	arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;
//	arr[4] = 5;
//	cout << "第一种 " << arr[2] << endl;
//	int arr1[5] = { 1,2,3,4,5 };
//	cout << "第二种 " << arr[2] << endl;
//	//利用循环，输出数组的元素
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	int arr2[5] = { 1,2,3 };//初始化未填满数组，用0填充
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	int arr3[] = { 1,2,3,4,5 ,6};
//	cout << "第三种 " << arr3[2] << endl;
//	system("pause");
//	return 0;
//}
////一维数组名用途
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "整个数组空间大小：" << sizeof(arr) << endl;//统计整个数组在内存中的长度
//	cout << "每个元素空间大小：" << sizeof(arr[0]) << endl;
//	cout << "元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "数组首地址：" << arr << endl;//获取数组在内存中的首地址
//	cout << "第一个元素地址：" << &arr[0] << endl;
//	cout << "第二个元素地址：" << &arr[1] << endl;
//
//
//	system("pause");
//	return 0;
//}
//五只小猪称体重：寻找最重的小猪
int main()
{
	int arr[5] = { 456,487,625,358,512 };
	int a = 0;
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i] > max)
		{
			max = arr[i];
			a = i;
		}
	}
	cout << "小猪 " << a << " 最重，体重为：" << max << endl;
	system("pause");
	return 0;
}
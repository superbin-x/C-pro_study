#include <iostream>
using namespace std;

////break语句
//int main()
//{
//	 //出现在switch语句中
//	cout << "选择副本难度：" << endl;
//	cout << "1.普通  2.中等  3.困难  4.炼狱：";
//	int select = 0;
//	cin >> select;
//	switch (select)
//	{
//		case 1:
//			cout << "进入普通难度ing" << endl;
//			break;
//		case 2:
//			cout << "进入中等难度ing" << endl;
//			break;	
//		case 3:
//			cout << "进入困难难度ing" << endl;
//			break;
//		case 4:
//			cout << "进入炼狱难度ing" << endl;
//			break;
//		default:
//			cout << "选择错误" << endl;
//			break;
//	}
//	//出现在循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//		if (5 == i)
//		{
//			cout << endl;
//			break;//退出循环
//		}
//		cout << i << " ";
//	}
//	//出现在嵌套循环中
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (5 == j)
//			{
//				break;//退出内层循环
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
////continue语句
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//
//		if (0 == i % 2)
//		{
//			continue;//执行到此不再线下执行，执行下一次代码
//		}
//		cout << i << " ";
//	}
//
//	system("pause");
//	return 0;
//}
//goto语句
int main()
{
	cout << "1、***" << endl;
	cout << "2、***" << endl;
	goto flag;
	cout << "3、***" << endl;
	cout << "4、***" << endl;
flag:
	cout << "5、***" << endl;
	system("pause");
	return 0;
}
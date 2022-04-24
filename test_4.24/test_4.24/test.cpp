#include <iostream>
using namespace std;
////if语句
//int main()
//{
//	int num = 0;
//	cout << "输入分数：";
//	cin >> num;
//	//单行if语句
//	if (num > 600)//if后面不要加分号。条件为真执行
//	{
//		cout << "恭喜，考上一本！"<<endl;
//	}
//	//多行if语句
//	cout << "输入分数1：";
//	cin >> num;
//	if (num > 600)//大于600执行
//	{
//		cout << "恭喜，考上一本！" << endl;
//	}
//	else//不大于600，执行
//	{
//		cout << "未考上一本" << endl;
//	}
//	//多条件if语句
//	cout << "输入分数2：";
//	cin >> num;
//	if (num > 600)
//	{
//		cout << "考上一本" << endl;
//	}
//	else if (num > 500)
//		{
//			cout << "考上二本" << endl;
//		}
//		else if (num > 400)
//			{
//				cout << "考上三本" << endl;
//			}
//			else
//			{
//				cout << "复读" << endl;
//			}
//	//嵌套if语句
//	cout << "输入分数3：";
//	cin >> num;
//	if (num > 600)
//	{
//		cout << "考上一本" << endl;
//		if (num > 700)
//		{
//			cout << "考上清华" << endl;
//		}
//		else if (num > 650)
//		{
//			cout << "考上人大" << endl;
//		}
//			else
//			{
//				cout << "普通一本" << endl;
//			}
//	}
//	else if (num > 500)
//		{
//			cout << "考上二本" << endl;
//		}
//		else if (num > 400)
//			{
//				cout << "考上三本" << endl;
//			}
//			else
//			{
//				cout << "复读" << endl;
//			}
//	system("pause");
//	return 0;
//}
////三只小猪abc称体重，判断哪只最重
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "输入小猪a的体重：";
//	cin >> num1;
//	cout << "输入小猪b的体重：";
//	cin >> num2;
//	cout << "输入小猪c的体重：";
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "小猪a最重" << endl;
//		}
//		else
//		{
//			cout << "小猪c最重" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "小猪b最重" << endl;
//		}
//		else
//		{
//			cout << "小猪c最重" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
////三目运算符：表达式1？表达式2;表达式3
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 0;
//	num3 = (num1 > num2 ? num1 : num2);
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	cout << endl;
//	//在C++中，三目运算符返回的是变量，可以继续赋值
//	(num1 > num2 ? num1 : num2) = 158;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	system("pause");
//	return 0;
//}
////switch语句：
//int main()
//{
//	int num = 0;
//	cout << "输入评分：";
//	cin >> num;
//	switch (num)//判断条件输出只能是整型值或字符型值
//	{
//	case 10:
//		cout << "经典电影" << endl;
//		break;
//	case 9:
//		cout << "好电影" << endl;
//		break;
//	case 8:
//		cout << "好电影" << endl;
//		break;
//	case 7:
//			cout << "好电影" << endl;
//			break;
//	case 6:
//		cout << "一般电影" << endl;
//		break;
//	case 5:
//		cout << "一般电影" << endl;
//		break;
//	default:
//		cout << "烂片" << endl;
//		break;
//	}
//
//}
////while循环语句：
//int main()
//{
//	int num = 0;
//	while (num <= 10)//循环条件为真，执行循环语句
//	{
//		cout << num;
//		num++;
//	}
//	system("pause");
//	return 0;
//}
////猜数字游戏
//#include<ctime>  //time系统时间头文件
//int main()
//{
//	int num = 0;
//	num = rand()%100+1; //系统生成1-100间的随机数
//	srand((unsigned int)time(NULL)); //添加随机数种子：利用当前系统时间生成随机数，防止每次生成随机数都一样
//	int num1 = 0;
//	
//	while (1)
//	{
//		cout << "输入猜测的数字：";
//		cin >> num1;
//		if (num1 > num)
//		{
//			cout << "大了" << endl;
//		}
//		else if (num1 < num)
//		{
//			cout << "小了" << endl;
//		}
//		else
//		{
//			cout << "恭喜你，猜对了" << endl;
//			break; //退出循环
//		}
//	}
//
//	system("pause");
//	return 0;
//}
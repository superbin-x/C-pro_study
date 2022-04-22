#include  <iostream>
using namespace std;
//
//int main()
//{
//	cout << "hello world!" << endl; //在屏幕中输出hello world!
//	system("pause");
//	return 0;
////}
//#define Day 7 //#define 定义的宏常量
//int main()
//{
//	int a = 10; //变量创建：数据类型 变量名 = 初始值；
//	const int month = 12; //const修饰变量变为常量：const 类型 变量名=初始值；
//	cout << a << endl;
//	cout << "一周总共有：" << Day << "天" << endl;
//	cout << "一年总共有：" << month << "月" << endl;
//	system("pause");
//	return 0;
//}
////标识符的命名规则：
////1. 标识符不可是关键字 
////2.标识符是由字母、数字、下划线组成
////3.标识符第一个字符只能是字母或下划线
////4.标识符区分大小写
//int main()
//{
//	int abc = 10;
//	int _abc = 10;
//	int _14abc = 10;
//	int ABC = 10; //建议：给变量取名时，最好能够见名知意
//	system("pause");
//	return 0;
//}
//数据类型
int main()
{
	short num1 = 10;//短整型
	int num2 = 10;//整型
	long num3 = 10;//长整型
	long long num4 = 10;//更长整型
	float f1 = 3.14f;//单精度浮点型。f作用：表示变量f1是单精度浮点数，编译器默认小数为double类型
	double d1 = 3.1415926;//双精度浮点型。默认输出6位有效数字
	float f2 = 3e2;//科学计数法表示小数：f2=3*10^2
	float f3 = 3e-2;//科学计数法表示小数：f2=3*10^-2
	char ch = 'a'; //字符型：创建字符型变量时，要用单引号；单引号内只能有一个字母
	//字符变量是把对应的ASCLL码值放入存储单元
	double d2 = 3e-3;//d2=3*10^-3
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	cout << "d2=" << d2 << endl;
	cout << "ch=" << ch << endl;
	cout << "short空间大小：" << sizeof(short) << endl;//2
	cout << "int空间大小：" << sizeof(num2) << endl;//4
	cout << "long空间大小：" << sizeof(long) << endl;//4
	cout << "long long 空间大小：" << sizeof(num4) << endl;//8
	cout << "float空间大小：" << sizeof(f1) << endl;//4
	cout << "double空间大小：" << sizeof(d1) << endl;//8
	cout << "char空间大小：" << sizeof(ch) << endl;//1
	system("pause");
	return 0;
}
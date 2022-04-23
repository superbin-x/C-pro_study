#include <iostream>
using namespace std;
#include <string> //C++字符串头文件
//转义字符
//int main()
//{
//	cout << "hello world\n";  //  \n :换行符   endl自带换行
//	cout << "\\" << endl; //  \\：输出字符“\”
//	cout << "abc\thello world" << endl;// \t：水平制表符  整齐的输出字符
//	cout << "abcabc\thello world" << endl;
//	cout << "a\thello world" << endl;
//	cout << "abc hello world" << endl;// 无\t
//	cout << "abcabc hello world" << endl;
//	cout << "a hello world" << endl;
//	system("pause");
//	return 0;
//}
//字符串
//int main()
//{
//	//C语言字符串：char 变量名[]="字符串值";
//	char arr[] = "hello world";
//	cout << arr << endl;
//
//	//C++字符串：包含一个头文件<string>
//	string str = "hello world";
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//布尔类型：代表真或假的值
//int main()
//{
//	bool flag = true; //代表真
//	cout << flag << endl;//1
//	flag = false;//代表假
//	cout << flag << endl;//0
//	cout << "bool空间大小：" << sizeof(bool) << endl; //1字节
//	system("pause");
//	return 0;
//}
////数据的输入 : cin >> 变量名;
//int main()
//{
//	int a = 0;
//	cout << "a=" << a << endl;
//	cout << "整型a重新赋值：" ;
//	cin >> a;
//	cout << "a=" << a << endl;
//
//	float f = 3.14f;
//	cout << "f=" << f << endl;
//	cout << "单精度浮点型f重新赋值：";
//	cin >> f;
//	cout << "f=" << f << endl;
//
//	char ch = 'a';
//	cout << "ch=" << ch << endl;
//	cout << "字符型ch重新赋值：";
//	cin >> ch;
//	cout << "ch=" << ch << endl;
//
//	string str = "hello"; //加头文件<string>
//	cout << "str=" << str << endl;
//	cout << "字符串str重新赋值：";
//	cin >> str;
//	cout << "str=" << str << endl;
//
//	bool flag = true;
//	cout << "flag" << flag << endl;
//	cout << "布尔类型bool重新赋值：";
//	cin >> flag;
//	cout << "flag=" << flag << endl;
//
//	system("pause");
//	return 0;
//}
////算术运算符
//int main()
//{
//	//加减乘除
//	int num1 = 10;
//	int num2 = 4;
//	cout << "num1 + num2 = " << num1 + num2 << endl;
//	cout << "num1 - num2 = " << num1 - num2 << endl;
//	cout << "num1 * num2 = " << num1 * num2 << endl;
//	cout << "num1 / num2 = " << num1 / num2 << endl;//只取整数部分
//	//小数相除
//	float f1 = 1.25f;
//	float f2 = 0.23f;
//	cout << "f1 / f2 =" << f1 / f2 << endl;
//	cout << "num1 % num2 = " << num1 % num2 << endl; //取模：两数相除取余数，两小数不可以取模运算
//	// ++ --
//	int a = 10;
//	++a; //前置
//	cout << "a=" << a << endl;
//	int b = 10;
//	b++; //后置
//	cout << "b=" << b << endl;
//	//前置：先让变量+1或-1，后进行表达式运算
//	int a1 = 10;
//	int b1 = ++a1 * 10;
//	cout << "a1=" << a1 << endl;
//	cout << "b1 = ++a1 * 10=" << b1 << endl;
//	//后置：先进行表达式运算，后让变量+1或-1
//	int a2 = 10;
//	int b2 = a2++ * 10;
//	cout << "a2=" << a2 << endl;
//	cout << "b2 = a2++ * 10=" << b2 << endl;
//	system("pause");
//	return 0;
//}
////赋值运算符：= += -= *= /= %=
//int main()
//{
//	int a = 100;
//	cout << "a=" << a << endl;
//	a += 2; //a=a+2
//	cout << "a+=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a -= 2; //a=a-2
//	cout << "a-=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a *= 2; //a=a*2
//	cout << "a*=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a /= 2; //a=a/2
//	cout << "a/=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a %= 2; //a=a%2
//	cout << "a%=2=" << a << endl;
//	system("pause");
//	return 0;
//}
//比较运算符：==  !=  <  >  <=  >=
//逻辑运算符：！&& ||
//int main()
//{
//	int a = 10;
//	int b = 5;
//	cout << (a == b) << endl;
//	cout << (a != b) << endl;
//	cout << (a > b) << endl;
//	cout << (a < b) << endl;
//	cout << (a <= b) << endl;
//	cout << (a >= b) << endl;
//
//	cout << !a << endl;
//	cout << (a && b) << endl;//&& 两个条件都为真，才为真。同真为真，其余为假
//	b = 0;
//	cout << (a && b) << endl;
//	cout << (a || b) << endl;//同假为假，其余为真
//	a = 0;
//	cout << (a || b) << endl;
//	system("pause");
//	return 0;
//}
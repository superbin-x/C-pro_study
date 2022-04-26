#include <iostream>
using namespace std;

////do{……}while()循环语句
//int main()
//{
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num <= 10);
//
//
//	system("pause");
//	return 0;
//}
////水仙花数：一个3位数，他的每位上的数的三次幂之和等于它本身
////个位^3+十位^3+百位^3=本身
//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//获取个位
//		b = num / 10 % 10;//获取十位
//		c = num / 100;//获取百位
//		if(a*a*a + b*b*b + c*c*c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	system("pause");
//	return 0;
//}
////for循环语句
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
////敲桌子；1-100，若数字个位含7、十位含7或是7的倍数，则输出数字和敲桌子
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		//  个位含7        十位含7         7的倍数
//		if (7 == i % 10 || 7 == i / 10 || 0 == i % 7)
//		{
//			cout << "敲桌子  " << i << endl;
//		}
//		else
//		{
//			cout << i <<endl;
//		}
//	}
//	return 0;
//}
////嵌套循环
//int main()
//{
//	for (int j = 0; j < 10; j++)//外层执行一次，内层执行一周
//	{
//		for (int i = 0; i < 10; i++)//内层循环
//		{
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
////乘法口决表
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int a = i * j;
//			cout << j << "*" << i << "=" << a << "  ";
//		}
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}

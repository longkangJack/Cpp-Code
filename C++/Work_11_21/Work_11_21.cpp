#include <iostream>//C++头文件
using namespace std;//命名空间
void fun(char ch)//全局
{
	cout << "This is fun(char)" << endl;
}
namespace myspace//命名空间
{
	void fun(int a)
	{
		cout << "This is fun(int)" << endl;//或者 std::cout<<...<<std::endl;未引入命名空间时
	}
}
int fun(int a, int b, int c)
{
	return a + b + c;
}
//重载
//个数不同 类型不同都可以进行重载
extern "C" int Max(int a, int b)//
{
	return a > b ? a : b;
}
int Max(int a, int b, int c)
{
	return Max(Max(a, b), c);
}
int main()
{
 //   cout << "Hello World!"<<endl;
	//int a = 10;
	//char A = 'a';
	//cout << a << endl;//printf("%d",a);
	////fun(a);
	////fun(A);
	////作用符访问
	//myspace::fun(a);
	//return 0;
	//cout << fun(1, 2, 3) << endl;
	//cout << Max(10, 20) << endl;
	//cout << Max(10, 20) << endl;
	int a = 10;
	int &b = a; //引用
	int *p = &a;
	int *&q = p; //&q是p的别名 c++中
	cout << &b << endl;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//[]优先级大于&
	int(&br)[10] = arr;
	int& d = b;
}

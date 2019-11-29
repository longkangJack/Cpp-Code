#include<iostream>
#include<string.h>
#include"fun.h"
using namespace std; //
class String
{
public:
	//深拷贝
	String(const String &s)
	{
		m_data = (char*)malloc(strlen(s.m_data)+1);
		strcpy(m_data, s.m_data);
	}
	~String()
	{
		free(m_data);
	}
public:
	void show()const // show(const * const this)
	{

	}
private:
	char* m_data;
};
void main()
{

}
//int main()
//{
//	short (*arr)[10][10];
//	short *arr[10][10];
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = 'a' + 1;
//	}//赋值 strlen 结果是随机值
//	初始化的话 如果空间没有被初始化完全 其他用0补充所以就是5
//	cout << strlen(arr) << endl;
//	cout << sizeof(arr) << endl;
//	return 0;
//}
/*class Test
{
public:
	Test()
	{
		m_data = 0;
	}
private:
	int m_data;
};
void main()
{
	Test t;
	Test t1 = t;
}
//1 常方法的 const 怎么了
//不能修改数据成员 //未初始化完空间 基本按照0补齐
//2 GetData() 与GetData()const 能否共存可以共存
//可以共存
//3 拷贝构造函数的const
//***\* const\******* \* ：\****
//*** \* 为了整个程序的安全，还是加上const，防止对引用类型参数值的意外修改。\****
//*** \*& \******* \* ：\****
//*** \* 如果传值，就必须要创建一个临时对象，创建对象就要调用拷贝构造函数，这样，就会无穷递归调用。(编译器强制性要求参数必须要用&)\****
//4 赋值语句
//Test& operator = (const Test &t)
//void operator = (Test t)
//面向对象
//efficient

/*
class Test
{
public://系统存在默认构造函数 写上之后 默认的构造函数就失去了作用
	//名字和类相同
	//无返回值
	//可以重载
	Test(int data)
	{
		cout << "Create Test Object:" << this << endl;
		m_data = data;
	}
	//拷贝构造函数
	Test(const Test& t)
	{
		cout << "Copy Test Object" << this << endl;
		m_data = t.m_data;
	}
	//析构函数
	//不能重载
	//是构造函数的取反
	//一个类只能有一个析构函数
	~Test()
	{
		cout << "Free Test Object:" << this << endl;
	}
	//赋值语句
	Test& operator = (Test t)
	{

	}
	//常方法
public:
	void show()
	{
		cout << m_data << endl;
	}
	//int GetData(const int * const  this)
	int GetData()const
	{
		return m_data;
	}
	//int GetData( int* const  this)
	int GetData()
	{
		return m_data;
	}
private:
	int m_data = 0;
};
void main()
{
	/*Test t(10);//普通初始对象
	Test t1 = t;//对象初始化对象  //先调用拷贝构造函数
	Test t2(100);	*/
	/*Test t(10);
	t.show();
}*/
/*class Test
{
public:
	Test()//构造函数自动调动   必须与类的名字相同
	{
		cout << "creat test object" << endl;
	}
	Test(int data)
	{
		m_data = data;
		cout << m_data << endl;
	}
private:
	int m_data;
	int m_value;
};
void main()
{
	Test t;
	Test t1(10);
}
/*void main()
{
	cout << "The type is " << sizeof(int) << endl;
}

/*int main()
{
	int a = 10;
	cout << "my name is " << a << endl;
	return 0;
}
/*class CGoods
{
public:
	void RegisterGoods(const char* name, int count, float price)
	{
		strcpy_s(this->name, name);
		this->count = count;
		this->price = price;
	}
	void SetName(const char* name)
	{
		strcpy_s(this->name, name);
	}
	void SetCount(int count)
	{
		this->count = count;
	}
	void SetPrice(float price)
	{
		this->price = price;
	}
public:
	char* GetName()
	{
		return this->name;
	}
	int GetCount()
	{
		return count;
	}
	float GetPrice()
	{
		return price;
	}
private:
	char name[10];
	int count;
	float price;
	float total_price;
};
void main()
{
	CGoods c1;
	c1.RegisterGoods("c++p", 10, 35);
	cout << c1.GetName() << endl;
	c1.SetName("Javap");//相当于SetName(&c1当前地址name)
	cout << c1.GetName() << endl;
}
/*class Test
{
public://面向对象
	void SetData(int data)
	{
		m_data = data;
	}
	void Setvalue(int value)
	{
		m_value = value;
	}
	int GetData()
	{
		return m_data;
	}
	int Getvalue()
	{
		return m_value;
	}
public:
	void showdata()
	{
		cout << "data = " << m_data << endl;
	}
	void showvalue()
	{
		cout << "value = " << m_value << endl;
	}
public:
	int m_data;
	int m_value;
};
void main()//函数公用
{
	Test t1, t2, t3;
	t1.SetData(10);//SetData(&t1,10)
	t2.SetData(20);//SetData(&t2,20)


}
/*void main()
{
	Test t;//开空间
	t.m_data = 10;
	t.showdata();
}
/*void main()
{
	Test t;
	t.SetData(10);
	int value = t.GetData();
	t.showdata();
}
/*class Student//类//public 公有 protected 保护的 private 私有的//默认私有
{
public:
	void Register(const char *n, const char *s, int a, int h, int w);
private:
	char name[10];//成员数据 数据成员
	char sex[3];
	int age;
	int height;
	int weight;
};
//::作用域访问符号
void Student::Register(const char *n, const char *s, int a, int h, int w)//初始化
{
	strcpy_s(name, n);
	strcpy_s(sex, s);
	age = a;
	height = h;
	weight = w;
}
void main()
{
	Student s;//s成为对象,实例化对象
	s.Register("wrx", "女", 18, 169, 48);

}


/*struct Student
{
	char name[10];
	char sex[3];
	int age;
	int height;
	int weight;
};

void main()
{
	Student s1;//结构体变量
	Student s2;
}
/*void f(nullptr_t)
{
	cout << "f(nullptr_t)" << endl;
}
int main()
{
	int* p = nullptr;//c++空
	f(nullptr);
}
/*void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//普通c++循环
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	//C++11的循环
	for (auto ele : arr)//ele 时变量名
		cout << ele << " ";
	cout << endl;
}
/*
inline int fun(int a, int b)//内联函数   提高效率
{
	return a + b;
}
void main()
{
	int a = 10;
	auto b = 20;
	int x = 10;
	auto c = &x;
	cout << typeid(b).name() << endl;//打印b的类型
	cout << typeid(c).name() << endl;//显示类型
	auto d = 12.34;
	decltype(d) e;
	cout << typeid(e).name() << endl;
}
/*void main()
{
	int value = fun(10, 20);
}

/*int &fun(int& a, int& b)
{
	int v = a + b;
	return v;
}
void main()
{
	int a = 10;
	int b = 20;
	int &value = fun(a, b);
	cout << value << endl;
}
/*
void Swap(int& a, int& b)//引用
{
	int tmp = a;
	a = b;
	b = tmp;
}
int fun(int a, int b, int& v)
{
	v = a + b;
	return v;
}
void main()
{
	int a = 10;
	int b = 20;
	int& ra = a;
	int* p = &a;
	int*& q = p;
	int ar[5] = { 1,2,3,4,5 };
	int(&br)[5] = ar;
	/*cout << a << endl;
	cout << b << endl;
	Swap(a, b);
	cout << a << endl;
	cout << b << endl;*/
	/*int res;
	int value = fun(a, b, res);
	cout << value << endl;
	cout << res << endl;
	
}*/

/*
void main()
{
	int a = 10;
	int& ra = a;
	const int& rb = a;//不允许通过rb修改a的值,
	ra = 11;
}
/*void main()
{
	int a = 10;
	int &ra = a;
	int &rb = a;//一个变量多个引用,ra 引用a之后再不能引用其他变量.
	int &rc = ra;
}


/*void main()
{
	int a = 10;
	int &ra = a;//cpp中的引用,ra不另外开辟空间 就是a的一个名字，改变ra a的值也改变.
	//类型不同 不能赋值

}*/
#include<iostream>
#include<stdio.h>
#include"fun.h"
using namespace std; //


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
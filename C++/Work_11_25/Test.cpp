#include<iostream>
#include<string.h>
#include"fun.h"
using namespace std; //
class String
{
public:
	//���
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
//	}//��ֵ strlen ��������ֵ
//	��ʼ���Ļ� ����ռ�û�б���ʼ����ȫ ������0�������Ծ���5
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
//1 �������� const ��ô��
//�����޸����ݳ�Ա //δ��ʼ����ռ� ��������0����
//2 GetData() ��GetData()const �ܷ񹲴���Թ���
//���Թ���
//3 �������캯����const
//***\* const\******* \* ��\****
//*** \* Ϊ����������İ�ȫ�����Ǽ���const����ֹ���������Ͳ���ֵ�������޸ġ�\****
//*** \*& \******* \* ��\****
//*** \* �����ֵ���ͱ���Ҫ����һ����ʱ���󣬴��������Ҫ���ÿ������캯�����������ͻ�����ݹ���á�(������ǿ����Ҫ���������Ҫ��&)\****
//4 ��ֵ���
//Test& operator = (const Test &t)
//void operator = (Test t)
//�������
//efficient

/*
class Test
{
public://ϵͳ����Ĭ�Ϲ��캯�� д��֮�� Ĭ�ϵĹ��캯����ʧȥ������
	//���ֺ�����ͬ
	//�޷���ֵ
	//��������
	Test(int data)
	{
		cout << "Create Test Object:" << this << endl;
		m_data = data;
	}
	//�������캯��
	Test(const Test& t)
	{
		cout << "Copy Test Object" << this << endl;
		m_data = t.m_data;
	}
	//��������
	//��������
	//�ǹ��캯����ȡ��
	//һ����ֻ����һ����������
	~Test()
	{
		cout << "Free Test Object:" << this << endl;
	}
	//��ֵ���
	Test& operator = (Test t)
	{

	}
	//������
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
	/*Test t(10);//��ͨ��ʼ����
	Test t1 = t;//�����ʼ������  //�ȵ��ÿ������캯��
	Test t2(100);	*/
	/*Test t(10);
	t.show();
}*/
/*class Test
{
public:
	Test()//���캯���Զ�����   ���������������ͬ
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
	c1.SetName("Javap");//�൱��SetName(&c1��ǰ��ַname)
	cout << c1.GetName() << endl;
}
/*class Test
{
public://�������
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
void main()//��������
{
	Test t1, t2, t3;
	t1.SetData(10);//SetData(&t1,10)
	t2.SetData(20);//SetData(&t2,20)


}
/*void main()
{
	Test t;//���ռ�
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
/*class Student//��//public ���� protected ������ private ˽�е�//Ĭ��˽��
{
public:
	void Register(const char *n, const char *s, int a, int h, int w);
private:
	char name[10];//��Ա���� ���ݳ�Ա
	char sex[3];
	int age;
	int height;
	int weight;
};
//::��������ʷ���
void Student::Register(const char *n, const char *s, int a, int h, int w)//��ʼ��
{
	strcpy_s(name, n);
	strcpy_s(sex, s);
	age = a;
	height = h;
	weight = w;
}
void main()
{
	Student s;//s��Ϊ����,ʵ��������
	s.Register("wrx", "Ů", 18, 169, 48);

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
	Student s1;//�ṹ�����
	Student s2;
}
/*void f(nullptr_t)
{
	cout << "f(nullptr_t)" << endl;
}
int main()
{
	int* p = nullptr;//c++��
	f(nullptr);
}
/*void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//��ͨc++ѭ��
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	//C++11��ѭ��
	for (auto ele : arr)//ele ʱ������
		cout << ele << " ";
	cout << endl;
}
/*
inline int fun(int a, int b)//��������   ���Ч��
{
	return a + b;
}
void main()
{
	int a = 10;
	auto b = 20;
	int x = 10;
	auto c = &x;
	cout << typeid(b).name() << endl;//��ӡb������
	cout << typeid(c).name() << endl;//��ʾ����
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
void Swap(int& a, int& b)//����
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
	const int& rb = a;//������ͨ��rb�޸�a��ֵ,
	ra = 11;
}
/*void main()
{
	int a = 10;
	int &ra = a;
	int &rb = a;//һ�������������,ra ����a֮���ٲ���������������.
	int &rc = ra;
}


/*void main()
{
	int a = 10;
	int &ra = a;//cpp�е�����,ra�����⿪�ٿռ� ����a��һ�����֣��ı�ra a��ֵҲ�ı�.
	//���Ͳ�ͬ ���ܸ�ֵ

}*/
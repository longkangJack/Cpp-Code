#include<iostream>
using namespace std;



class ListNode
{
	friend class List;
public:
	ListNode():m_data(0),next(nullptr)
	{}
	ListNode(int data, ListNode* n = nullptr)
		:m_data(data), next(n)
	{}
	~ListNode()
	{}
private:
	int m_data;
	ListNode* next;
};
class List
{
public:
	List():head(nullptr)
	{}
public:
	void push_back(const int& x)
	{
		ListNode* s = (ListNode*)malloc(sizeof(ListNode));
		s->m_data = x;
		s->next = nullptr;
		if (head == nullptr)
			head = s;
		else
		{
			ListNode* p = head;
			while (p->next != nullptr)
				p = p->next;
				p->next = s;
		}

	}
private:
	ListNode* head;
};
void main()
{
	List mylist;
	for (int i = 0; i < 4; i++)
	{
		mylist.push_back(i);
	}
}
//类型不占大小
/*typedef struct ListNode
{
	int data;
	ListNode* next;
}ListNode;
typedef struct List
{
	ListNode* head;
	int capacity;
};
/*class Test
{
public:
	Test(int data = 0) :m_data(data)
	{}
	Test& operator=(const Test& t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	~Test()
	{}
	//1 构造对象
	//2 初始化对象
	//3 类型转换
	void ShowTest(int m_data)
	{
		cout <<"t ="<< m_data << endl;
	}
public:
	operator int()
	{
		return m_data;
	}
public:
	void Increment()
	{
		m_count++;
	}
public:
	static int Getusecount()
	{
		return m_count;//内部不能调动其他函数
	}
private:
	int m_data;
	int m_value;
	static int m_count;//所有对象共享
};
//静态方法 
//友元
//全局  无this指针
//////////////////////////////
int Test::m_count = 0;
////////////////////////////////
void main()
{
	Test t1;
	t1.Getusecount();
}
/*
void main()
{
	Test t;
	t.ShowTest(10);
	int value = t;
	t.ShowTest(100);

}
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
}*/
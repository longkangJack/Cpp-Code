#include<iostream>
using namespace std;



//c++��̬�ڴ����
class Test
{
public:
	Test(int data = 0) :m_data(data)
	{
		cout << "Create Test Object:" << this << endl;
	}
	//��ʼ�����캯��
	Test(const Test& t)
	{
		cout << "Copy Create Test Object:" << this << endl;
	}
	//�������캯��
	Test& operator = (const Test& t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	//operator ���ز������Ĺؼ���
	~Test()
	{
		cout << "Free Test Object :" << this << endl;
	}
	//��������
public:
	void InitObject(int data = 0)
	{
		cout << "Init Test Object" << endl;
		m_data = data;
	}
	void DestoryObject()
	{
		cout << "Destory Test Object." << endl;
	}
public:
	int GetData()const
	{
		return m_data;
	}
private:
	int m_data;

};
//�ڲ�ʵ��new �� delete
void* operator new(size_t sz)
{
	void* p = malloc(sz);
	return p;
}
void operator delete(void* ptr)
{
	free(ptr);
}
int main()
{
	Test *pt = new Test;
	delete pt;//���뵥������Ŀռ䷽��
	//�����Ķ���ķ���
	Test* pt1 = new Test[10];
	delete[]pt1;//���ù��캯������������
	system("color 80");
	return 0;
}

/*class ListNode
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
//���Ͳ�ռ��С
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
	//1 �������
	//2 ��ʼ������
	//3 ����ת��
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
		return m_count;//�ڲ����ܵ�����������
	}
private:
	int m_data;
	int m_value;
	static int m_count;//���ж�����
};
//��̬���� 
//��Ԫ
//ȫ��  ��thisָ��
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
#include<iostream>
#include<list>
#include<assert.h>
#include<stdio.h>
using namespace std;
//List模拟实现
//迭代器失效有 string vector list

class Test
{
public:
	void fun()
	{
		cout << "Hello world" << endl;
	}
};
namespace bit
{

	template<typename T>
	struct ListNode
	{
		ListNode(const T &val = T())
		: _Next(nullptr),_Prev(nullptr),_Value(val)
		{}
		ListNode<T>* _Next;
		ListNode<T>* _Prev;
		T           _Value;
	};
	template<typename T>
	class ListIterator
	{
		typedef ListIterator slef;
	public:
		ListIterator() : _Ptr(nullptr)
		{}
		ListIterator(ListNode<T> *P) : _Ptr(P)
		{}
		~ListIterator()
		{}
	public:
		T& operator*()
		{
			return(_Ptr->_Value);
		}
		T* operator->()
		{
			return &*this;
			//return &(_Ptr->_Value);
		}
		slef& operator++()
		{
			_Ptr = _Ptr->_Next;
			return *this;
		}
		slef operator++(int)
		{
			slef tmp = *this;
			++*this;
			return tmp;
		}
	public:
		bool operator == (const slef& P)
		{
			return _Ptr == P._Ptr;
		}
		bool operator!=(const slef &P)
		{
			return !(*this==P);
		}
	public:
		ListNode<T>* Mynode()
		{
			return _Ptr;
		}
	private:
		ListNode<T>* _Ptr;
	};
	//链表类
	template<typename T>
	class list
	{
		typedef ListNode<T> *PNode;
		typedef ListIterator<T> iterator;
	public:
		list() : _Head(_BuyNode()),_size(0)
		{}
		list(size_t n,const T &value=T()) : _Head(_BuyNode()), _size(0)//个数构造
		{
			while (n--)
				push_back(value);	
		}
		template<typename _It>
		list(_It first, _It last) : _Head(_BuyNode()), _size(0)//区间
		{
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}
		list(const list<T>& lt) :_Head(_BuyNode()), _size(0)
       {
              list<T> tmp(lt.begin(), lt.end());
              swap(tmp);
        }
	public:
		size_t size()const
		{
			return _size;
		}
		bool empty()const
		{
			return _size == 0;
		}
	public:
		iterator begin()
		{
			return iterator(_Head->_Next);
		}

		iterator end()
		{
			return iterator(_Head);
		}
	public:
		void push_back(const T &val)
		{
			insert(end(), val);
		}
		void push_front(const T &val)
		{
			insert(begin(), val);
		}
		T& front()//访问头节点
		{
			assert(!empty());
			//return _Head->_Next->_Value;
			return *begin();
		}
		T& back()//尾节点
		{
			assert(!empty());
			return *end();
		}
		//交换
		void swap(list<T> &lt)
		{
			std::swap(_Head, lt._Head);
			std::swap(_size, lt._size);
		}
	public:
	iterator insert(iterator pos, const T& val)//插入方法
	{
		PNode _S = new ListNode<T>(val);
		PNode _P = pos.Mynode();
		_S->_Next = _P;
		_S->_Prev = _P->_Prev;
		_S->_Prev->_Next = _S;
		_P->_Prev = _S;
		_size++;
		return iterator(_S);
	}
	private:
		PNode _BuyNode(const T &val = T())
		{
			PNode _S = new ListNode<T>(val);
			_S->_Next = _S->_Prev = _S;
			return _S;
		}
	private:
		ListNode<T> *_Head;
		size_t _size;
	};
};

int main()
{
	int arr[] = { 1,2,3,4,5 };
	bit::list<int> mylist(arr,arr+5);
	//bit::list<int> mylist(10，1);
	bit::list<int> yourlist(mylist);

	//mylist.swap(yourlist);
	for (auto& e : yourlist)
		cout << e << "-->";
	cout << "Over." << endl;
	return 0;
}

//int main()
//{
//	bit::list<int> mylist;
//	for (int i = 1; i <= 5; i++)
//		//mylist.insert(mylist.end(), i);
//		mylist.push_back(i);
//	auto pos = mylist.front();
//	cout << "pos = " << pos << endl;
//	for (auto& e : mylist)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	/*auto it = mylist.begin();
//	while (it != mylist.end())
//	{
//		cout<<*it<< "-->";
//		++it;
//	}
//	cout << "Over." << endl;*/
//	return 0;
//}*/


#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<queue>
#include<assert.h>
using namespace std;
//全特化
template<class T1,class T2>
class Data
{
public:
	Data()
	{
		cout << "Data<int,int>"<<endl;
	}
private:
	T1 d1;
	T2 d2;
};

//template<class T>
//bool IsEqual(T& left, T& right)
//{
//	return left == right;
//}
//int main()
//{
//	string s1("abc");
//	string s2("xyz");
//	if (IsEqual(s1, s2))
//		cout << "Equal";
//	cout << "not Equal";	
//	return 0;
//}

//类型参数   //非类型参数  
/*template<class Type, size_t _N=10>//类型参数
class Array
{
private:
	Type Ar[_N];
};
int main()
{
	Array<int,100> ar;
	return 0;
}
//template<class Ty = void>
//struct plus
//{
//    Ty operator()(const Ty& left, const Ty& right)const
//    {
//        return (left + right);
//    }
//};
////一个类重载了一个对象仿函数
//int main()
//{
//    plus<int> p1;
//    cout << p1(10, 20) << endl;
//    return 0;
//}
//优先队列的模拟实现
/*namespace bit
{
	template<class T>
	struct less
	{
		bool operator()(const T& left, const T& right)
		{
			return left < right;
		}
	};
	template<class T>
	struct greater
	{
		bool operator()(const T& left, const T& right)
		{
			return left > right;
		}
	};
	template<class T, class Cont = vector<T>, class Pred = less<T> >
	class priority_queue
	{
	public:
 	typedef T      value_type;
	typedef size_t size_type;
		explicit priority_queue()
		{}
		priority_queue(const value_type* first,
			const value_type* last)
		{
			while (first != last)
				c.push_back(*first++);
			int root = (c.size() - 1) / 2;
			while (root >= 0)
			{
				adjustdown(root--);
			}
		}
     	bool empty() const
		{
			return c.empty();
		}
		size_type size() const
		{
			return c.size();
		}
		value_type& top()
		{
			assert(!empty());
			return c.front();
		}
		const value_type& top() const
		{
			assert(!empty());
			return c.front();
		}
		void push(const value_type& x)
		{
			c.push_back(x);
			adjustup(c.size() - 1);
		}
		void pop()
		{
			std::swap(c.front(), c.back());
			c.pop_back();
			adjustdown(0);
		}
	public:
		void show_heap()
		{
			for (int i = 0; i < c.size(); ++i)
				cout << c[i] << " ";
			cout << endl;
		}
	protected:
		void adjustdown(int parent)//向下调整
		{
			int child = 2 * parent + 1;
			while (child < c.size())
			{
				if (child + 1 < c.size() && comp(c[child], c[child + 1]))
					child += 1;
				if (comp(c[parent], c[child]))
				{
					std::swap(c[parent], c[child]);
					parent = child;
					child = 2 * parent + 1;
				}
				else
					break;
			}
		}
		void adjustup(int child)
		{
			int parent = (child - 1) / 2;
			while (child)
			{
				if (comp(c[parent], c[child])) // less(c[parent], c[child])
				{
					std::swap(c[parent], c[child]);
					child = parent;
  				 parent = (child - 1) / 2;
				}
				else
					break;
			}
		}
	protected:
		Cont c;
		Pred comp;
	};
};
void main()
{
	int v[] = { 5, 7, 8, 2, 9, 3, 1, 0 };
	int n = sizeof(v) / sizeof(int);
	bit::priority_queue<int> pq(v, v + n);
	while (!pq.empty())
	{
	cout << "top = " << pq.top() << endl;  //8  // 7
		pq.pop();
	}
}
//int main()
//{
//	vector<int> v = { 5,7,8,2,9,3,1,0 };
//	for (const auto& e : v)
//		cout << e << " ";
//	cout << endl;
//	make_heap(v.begin(), v.end());//制作一个堆
//	v.push_back(6);
//	push_heap(v.begin(), v.end());
//	for (const auto& e : v)
//		cout << e<<" ";
//	cout << endl;
//	pop_heap(v.begin(), v.end());//出堆
//
//	//一直出堆得到的是一个有序数组
//	
//	for (const auto& e : v)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}
//优先级队列
/*int main()
{
	vector<int> v = { 5,7,8,2,9,3,1,0 };
	priority_queue<int,vector<int>,greater<int>> pq;//大堆结构
	for (const auto& e : v)
		pq.push(e);

	//pq.pop();
	cout << pq.top() << endl;
	return 0;
}*/
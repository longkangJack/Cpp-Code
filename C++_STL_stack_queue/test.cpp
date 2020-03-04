#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<deque>
using namespace std;


//优先队列
//堆




//双向队列
/*int main()
{

	deque<int> de;
	de.push_back(1);
	de.push_front(2);
	for (const auto& e : de)
		cout << e << " ";
	cout << endl;
	return 0;
}
/*namespace bit
{
	//队列的实现
	template<class T>
	class queue
	{
		typedef size_t size_type;
		typedef T value_type;
	public:
		explicit queue()
		{}
		bool empty() const
		{
			return c.empty();
		}
		size_type size() const
		{
			return c.size();
		}
		value_type& front()
		{
			return c.front();
		}
		const value_type& front()const
		{
			return c.front();
		}
		value_type& back()
		{
			return c.back();
		}
		const value_type& back()const
		{
			return c.back();
		}
		void push(const value_type& x)
		{
			c.push_back(x);
		}
		void pop()
		{
			c.pop_front();
		}
	protected:
		list<T> c;
	};
}
int main()
{
	bit::queue<string> Q;
	Q.push("abcd");
	Q.push("F");
	cout << "front = " << Q.front() << endl;
	return 0;
}



//Stack的模拟实现
/*namespace bit
{
	template<class T>
	class stack
	{
		typedef size_t size_type;
		typedef T value_type;
	public:
		explicit stack()
		{}
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
			return c.back();
		}
		const value_type& top() const
		{
			return c.back();
		}
		void push(const value_type& x)
		{
			c.push_back(x);
		}
		void pop()
		{
			c.pop_back();
		}
	protected:
		vector<T> c;
	};
}
int main()
{
	bit::stack<string> st;
	st.push("abc");
	st.push("xyz");
	st.push("xxxxxxx");
	st.pop();
	cout << "size = " << st.size() << endl;
	cout << "front = " << st.top() << endl;
	
}

//栈和队列的简单应用
//int main()
//{
//	queue<int> Q;
//	cout << "empty = " << Q.empty() << endl;
//	for (int i = 1; i <= 5; i++)
//		Q.push(i);
//	cout << "size = " << Q.size() << endl;
//	cout << "front = " << Q.front() << endl;
//	cout << "back = " << Q.back() << endl;
//	int value = Q.front();
//	Q.pop();//出栈
//	cout << "size = " << Q.size() << endl;
//}
/*int main()
{
	stack<int> st;
	for(int i=1;i<=5;i++)
	st.push(i);
	//cout << "empty = " << st.empty() << endl;
	cout << "size = " << st.size() << endl;
	cout << "top = " << st.top() << endl;
	int value = st.top();
	st.pop();
	cout << "size = " << st.size() << endl;
	return 0;
}*/



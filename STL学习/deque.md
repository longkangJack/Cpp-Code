## STL之三：deque用法详解

deque函数：
deque容器为一个给定类型的元素进行线性处理，像向量一样，它能够快速地随机访问任一个元素，并且能够高效地插入和删除容器的尾部元素。但它又与vector不同，deque支持高效插入和删除容器的头部元素，因此也叫做双端队列。deque类常用的函数如下。
(1)    构造函数
deque():创建一个空deque
deque(int nSize):创建一个deque,元素个数为nSize
deque(int nSize,const T& t):创建一个deque,元素个数为nSize,且值均为t
deque(const deque &):复制构造函数
(2)    增加函数
void push_front(const T& x):双端队列头部增加一个元素X
void push_back(const T& x):双端队列尾部增加一个元素x
iterator insert(iterator it,const T& x):双端队列中某一元素前增加一个元素x
void insert(iterator it,int n,const T& x):双端队列中某一元素前增加n个相同的元素x
void insert(iterator it,const_iterator first,const_iteratorlast):双端队列中某一元素前插入另一个相同类型向量的[forst,last)间的数据
(3)    删除函数
Iterator erase(iterator it):删除双端队列中的某一个元素
Iterator erase(iterator first,iterator last):删除双端队列中[first,last）中的元素
void pop_front():删除双端队列中最前一个元素
void pop_back():删除双端队列中最后一个元素
void clear():清空双端队列中最后一个元素
(4)    遍历函数
reference at(int pos):返回pos位置元素的引用
reference front():返回手元素的引用
reference back():返回尾元素的引用
iterator begin():返回向量头指针，指向第一个元素
iterator end():返回指向向量中最后一个元素下一个元素的指针（不包含在向量中）
reverse_iterator rbegin():反向迭代器，指向最后一个元素
reverse_iterator rend():反向迭代器，指向第一个元素的前一个元素
(5)    判断函数
bool empty() const:向量是否为空，若true,则向量中无元素
(6)    大小函数
Int size() const:返回向量中元素的个数
int max_size() const:返回最大可允许的双端对了元素数量值
(7)    其他函数
void swap(deque&):交换两个同类型向量的数据
void assign(int n,const T& x):向量中第n个元素的值设置为x

``` c++

// deque.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include<iostream>

#include<deque>

 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{

	deque<int> d;

	d.push_back( 10 );

	d.push_back(20);

	d.push_back(30);

	cout<<"原始双端队列："<<endl;

	for(int i = 0; i < d.size(); i++)

	{

		cout<<d.at(i)<<"\t";

	}

	cout<<endl;

	d.push_front(5);

	d.push_front(3);

	d.push_front(1);

 

	cout<<"after push_front(5.3.1):"<<endl;

	for(int i = 0;i < d.size();i++)

	{

		cout<<d.at(i)<<"\t";

	}

	cout<<endl;

	d.pop_front();

	d.pop_front();

	cout<<"after pop_front() two times:"<<endl;

	for(int i = 0;i < d.size();i++)

	{

		cout<<d.at(i)<<"\t";

	}

	cout<<endl;

	return 0;

}

```

2.常规操作

```C++

#include <deque>  

#include <cstdio>  

#include <algorithm>  

using namespace std;  

int main()  

{  

    deque<int> ideq(20); //Create a deque ideq with 20 elements of default value 0  

    deque<int>::iterator pos;  

    int i;  

    for (i = 0; i < 20; ++i)  

        ideq[i] = i;  

  

    printf("输出deque中数据:\n");  

    for (i = 0; i < 20; ++i)  

        printf("%d ", ideq[i]);  

    putchar('\n');  

  

    //在头尾加入新数据  

    printf("\n在头尾加入新数据...\n");  

    ideq.push_back(100);  

    ideq.push_front(i);  

  

    //输出deque  

    printf("\n输出deque中数据:\n");  

    for (pos = ideq.begin(); pos != ideq.end(); pos++)  

        printf("%d ", *pos);  

    putchar('\n');  

  

    //查找  

    const int FINDNUMBER = 19;  

    printf("\n查找%d\n", FINDNUMBER);  

    pos = find(ideq.begin(), ideq.end(), FINDNUMBER);//注意迭代器类型在此查找  

    if (pos != ideq.end())  

        printf("find %d success\n", *pos);  

    else  

        printf("find failed\n");  

  

    //在头尾删除数据  

    printf("\n在头尾删除数据...\n");  

    ideq.pop_back();  

    ideq.pop_front();  

  

    //输出deque  

    printf("\n输出deque中数据:\n");  

    for (pos = ideq.begin(); pos != ideq.end(); pos++)  

        printf("%d ", *pos);  

    putchar('\n');  

    return 0;  

}  

```


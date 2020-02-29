#include<iostream>
#include<list>
#include<vector>
using namespace std;
//list的模拟实现





//int main()
//{
//	list<int> l1 = { 1,2,3,4,5,6,7,8,9,10 };
//	auto it = l1.begin();
//	while (it != l1.end())
//	{
//		if (*it == 5)
//			it = l1.erase(it);//接受该处的值 防止迭代器失效
//		else
//			it++;
//	}
//	for (const auto& e : l1)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	return 0;
//}
//int main()
//{
//
//	list<int> l1 = { 1,2,3,4,5,6,7,8,9,10 };
//	for (const auto& e : l1)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	auto first = find(l1.begin(), l1.end(), 4);
//	auto last = find(l1.begin(), l1.end(), 8);
//	l1.erase(first, last);
//	for (const auto& e : l1)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	return 0;
//}
//int main()
//{
//	//这样不会失效
//	list<int>mylist = { 1,2,3,4,5,6,7,8,9,10 };
//	auto pos = find(mylist.begin(), mylist.end(), 4);
//
//
//	pos = mylist.erase(pos);//删除然后打印会导致迭代器失效
//	cout << "pos = " << *pos << endl;
//	//mylist.push_front(100);
//	cout << "pos = " << *pos << endl;//访问迭代器的位置
//	return 0;
//}
//Swap/resize
//int main()
//{
//	int arr[] = { 1,2,3 };
//	list<int> l1(arr, arr + 3);
//	list<int> l2 = { 3,4,5 };
//	//交换
//	l1.swap(l2);
//	for (const auto& e : l1)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	return 0;
//}
//int main()
//{
//	list<int>mylist = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "size = " << mylist.size() << endl;
//	cout << "front = " << mylist.front() << endl;
//	cout << "back = " << mylist.back() << endl;
//	mylist.push_back(100);//尾插
//	mylist.pop_back();//尾删
//	for (const auto& e : mylist)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	auto pos = find(mylist.begin(), mylist.end(), 5);
//	//auto pos = mylist.end();
//	//mylist.insert(pos,10);//内部是迭代器
//	//有重复值时插入到第一个出现该数字的位置
//	//没有找到久相当于在尾部插入
//	//mylist.clear();//清除STL
//	mylist.erase(pos);//删除最后一个
//	//cout << "pos = " << *pos << endl;
//	for (const auto& e : mylist)
//		cout << e << "-->";
//	cout << "Over." << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	size_t n = sizeof(arr) / sizeof(int);
//	list<int> mylist;//构造一个空的list
//	list<int> mylist1(10, 2);//构造10个2
//	list<int> mylist2(mylist1);
//	list<int> mylist3(arr, arr + n);
//	list<int> mylist4(mylist3.begin(), mylist3.end());
//	list<int> mylist5 = { 1,2,3,4,5,6 };
//	for (auto& e : mylist5)
//		cout << e << "-->";
//	cout << "0ver." << endl;
//	for (const auto& e : mylist4)
//		cout << e << "-->";
//	cout << "0ver." << endl;
//	return 0;
//}
//int main()
//{
//	std::list<int> l1;
//	std::list<int> l2(4, 100);
//	std::list<int> l3(l2.begin(), l2.end());//用l2的左闭右开构造l3
//	std::list<int> l4(l3);
//	//以数组为迭代器区间构造l5;
//	/*int array[] = { 16,2,77,29 };
//	std::list<int> l5(array, array + sizeof(array) / sizeof(int));
//	for (std::list<int>::iterator it = l5.begin(); it != l5.end(); it++)
//		std::cout << *it << " ";
//	std::cout << endl;*/
//	for (auto& e : l3)
//		std::cout << e << " ";
//	std::cout << endl;
//	return 0;
//}


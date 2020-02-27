#include<iostream>
#include<list>
#include<vector>
using namespace std;



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	size_t n = sizeof(arr) / sizeof(int);
	list<int> mylist;//构造一个空的list
	list<int> mylist1(10,2);//构造10个2
	list<int> mylist2(mylist1);
	list<int> mylist3(arr, arr + n);
	list<int> mylist4(mylist3.begin(), mylist3.end());
	list<int> mylist5 = { 1,2,3,4,5,6 };
	for ( auto& e : mylist5)
	cout << e << "-->";
	cout << "0ver." << endl;
	for (const auto& e : mylist4)
		cout << e << "-->";
	cout << "0ver." << endl;
	return 0;
}
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


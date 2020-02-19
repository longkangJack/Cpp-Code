#include<iostream>
#include<string>
#include<vector>
using namespace std;









//swap用法
//int main()
//{
//	vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
//	vector<int> v2 = { 11,22,33,44,55,66,77,88,99,10 };
//	auto p = find(v1.begin(), v1.end(), 5);
//	auto p1 = find(v1.begin(), v1.end(), 10);
//	// it = v1.erase(p, p1);//可以删除一个 可以删除区间
//
//	v1.swap(v2);
//	for (auto& e : v1)
//		cout << e << " ";
//	cout << endl;
//	for (auto& e : v2)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}
//erase用法
//int main()
//{
//	vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
//	auto p = find(v1.begin(), v1.end(), 5);
//	auto p1 = find(v1.begin(), v1.end(), 10);
//	auto it = v1.erase(p,p1);//可以删除一个 可以删除区间
//	for (auto& e : v1)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}
//insert用法
//int main()
//{
//	vector<int> v1;
//	for (int i = 1; i < 10; i++)
//		v1.push_back(i);
//	auto p = find(v1.begin(), v1.end(), 5);
//	v1.insert(v1.end(), 100);
//	for (auto& e : v1)
//		cout << e << " ";
//		cout << endl;
//	return 0;
//}
//int main()
//{
//	vector<int> v;
//	for (int i = 1; i <= 10; i++)
//		v.push_back(i);
//	v.pop_back();
//	/*auto it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}*/
//	for (auto& e : v)
//		cout << e << " ";
//	cout << endl;
//	
//		
//	return 0;
//}


//int main()
//{
//
//	vector<int> v;//动态数组
//	cout << "size = " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//	v.push_back(1);
//	cout << "size = " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//
//	return 0;
//}
//int main()
//{
//	vector<int> v;
//	for (int i = 1; i <= 10; i++)
//		v.push_back(i);
//		//v.push_front(i);
//	
//	
//	for (auto& e : v)
//		cout << e << " ";
//	cout << endl;
//	
//		
//	return 0;
//}
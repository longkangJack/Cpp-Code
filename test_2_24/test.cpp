#include<iostream>
#include<list>
using namespace std;

int main()
{
	std::list<int> l1;
	std::list<int> l2(4, 100);
	std::list<int> l3(l2.begin(), l2.end());//��l2������ҿ�����l3
	std::list<int> l4(l3);
	//������Ϊ���������乹��l5;
	/*int array[] = { 16,2,77,29 };
	std::list<int> l5(array, array + sizeof(array) / sizeof(int));
	for (std::list<int>::iterator it = l5.begin(); it != l5.end(); it++)
		std::cout << *it << " ";
	std::cout << endl;*/
	for (auto& e : l3)
		std::cout << e << " ";
	std::cout << endl;
	return 0;
}


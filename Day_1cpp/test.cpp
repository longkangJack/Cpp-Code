#include<iostream>
#include<string>
using namespace std;


//void main()
//{
//	string str = "hello world";
//	//直接输出
//	cout << str << endl;
//	//operator
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i];//str.operator[](i);
//		//cout << endl;
//	}
//	//C++11输出方法
//	for (auto ele : str)//引用
//	{
//		if (ele == 'H')
//			ele = 'h';
//		cout << ele;
//	}
//	cout << endl;
//	//迭代器 iterator
//	string::iterator it = str.begin();
//	while (it != str.end())
//	{
//		cout << *it;
//		++it;
//	}
//	cout << endl;
//}
//void main()
//{
//	//string类对象支持cin和cout的直接输出和输出
//	string s("hello,bit!!!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	//s.clear();
//	cout << s.size() << endl;
//	// 将s中有效字符个数增加到10个，多出位置用'a'进行填充
//   // “aaaaaaaaaa”
//	s.resize(10, 'a');//有效字符调整到10个,总容量不变
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;// 将s中有效字符个数缩小到5个
//	cout << s << endl;
//	/*s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;*/
//	// 测试reserve是否会改变string中有效元素个数
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}


//void main()
//{
//	string s1; //构造空的string类对象s1；
//	string s2("hello bit");//用C格式字符串构造string类对象s2；
//	string s3(s2);//拷贝构造s3；
//	cout << "s1 = " << s1 << endl;
//	cout << "s2 = " << s2 << endl;
//	cout << "s3 = " << s3 << endl;
//	string s4(10, 'k');//拷贝10个k字符
//	cout << "s4 = " << s4 << endl;
//
//}

//void main()
//{
//	string str("hello bit");
//	cout <<"size = "<< str.size() << endl;
//	
//}

//int main()
//{
//	string str1;
//	cout << "str1 = " << str1 << endl;
//	const char* s = "bit";
//	string str2(s);
//	cout << "str2 = " << str2 << endl;
//
//	string str3("hello bit"); 
//	cout << "str3 = " << str3 << endl;
//
//	string str4(10, 'k');
//	cout << str4 << endl;
//	string str5(str2);
//	cout << str5 << endl;
//	return 0;
//}
//int main()
//{
//
//
//	string str3("Bit");
//	cout << str3 << endl;
//	return 0;
//}
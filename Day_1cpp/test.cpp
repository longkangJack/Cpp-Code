#include<iostream>
#include<string>
using namespace std;


//void main()
//{
//	string str = "hello world";
//	//ֱ�����
//	cout << str << endl;
//	//operator
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i];//str.operator[](i);
//		//cout << endl;
//	}
//	//C++11�������
//	for (auto ele : str)//����
//	{
//		if (ele == 'H')
//			ele = 'h';
//		cout << ele;
//	}
//	cout << endl;
//	//������ iterator
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
//	//string�����֧��cin��cout��ֱ����������
//	string s("hello,bit!!!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	//s.clear();
//	cout << s.size() << endl;
//	// ��s����Ч�ַ��������ӵ�10�������λ����'a'�������
//   // ��aaaaaaaaaa��
//	s.resize(10, 'a');//��Ч�ַ�������10��,����������
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;// ��s����Ч�ַ�������С��5��
//	cout << s << endl;
//	/*s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;*/
//	// ����reserve�Ƿ��ı�string����ЧԪ�ظ���
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}


//void main()
//{
//	string s1; //����յ�string�����s1��
//	string s2("hello bit");//��C��ʽ�ַ�������string�����s2��
//	string s3(s2);//��������s3��
//	cout << "s1 = " << s1 << endl;
//	cout << "s2 = " << s2 << endl;
//	cout << "s3 = " << s3 << endl;
//	string s4(10, 'k');//����10��k�ַ�
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
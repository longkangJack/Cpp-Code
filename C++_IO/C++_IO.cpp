// C++_IO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

//c++二进制读入
//int main()
//{
//	int arr[10];
//	int n = sizeof(arr) / sizeof(int);
//	ifstream ifile;//输出文件流
//	ifile.open("Test6.txt", ios::in|ios::binary);//对象打开文件
//	ifile.read((char*)arr, sizeof(int) * n);
//	ifile.close();
//	return 0;
//}

//c++二进制写入
//int main()
//{
//	int arr[10];
//	int n = sizeof(arr) / sizeof(int);
//	ofstream ofile;//输出文件流
//	ofile.open("Test5.txt", ios::out|ios::binary);//对象打开文件
//	ofile.write((const char*)arr, sizeof(int)*n);
//	ofile.close();
//	return 0;
//}
//c++文本写入
//int main()
//{
//	int arr[10];
//	int n = sizeof(arr) / sizeof(int);
//	ofstream ofile;//输出文件流
//	ofile.open("Test4.txt", ios::in);//对象打开文件
//	for (int i = 0; i < n; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	ofile.close();
//	return 0;
//c++文本读入
//int main()
//{
//	int arr[10];
//	int n = sizeof(arr) / sizeof(int);
//	ifstream ifile;//输出文件流
//	ifile.open("Test4.txt", ios::in);//对象打开文件
//	for (int i = 0; i < n; i++)
//	{
//		ifile >> arr[i];
//	}
//	ifile.close();
//	return 0;
//}
//文本读入
//int main()
//{
//	int arr[] = { 12,23,34,45,56,67,89,90,100 };
//	int n = sizeof(arr) / sizeof(int);
//	FILE* fp = fopen("Test7.txt", "rb");
//	if (NULL == fp)
//	{
//		cerr << "Open Test.txt file failed." << endl;
//		exit(1);//结束
//	}
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(fp, "%d", &arr[i]);
//	}
//	fclose(fp);
//	return 0;
//}
//c文本写入
//int main()
//{
//	int arr[] = { 12,23,34,45,56,67,89,90,100 };
//	int n = sizeof(arr) / sizeof(int);
//	FILE* fp = fopen("Test7.txt", "wb");
//	if (NULL == fp)
//	{
//		cerr << "Open Test.txt file failed." << endl;
//		exit(1);//结束
//	}
//	for (int i = 0; i < n; i++)
//	{
//		fprintf(fp, "%d", arr[i]);
//	}
//	fclose(fp);
//	return 0;
//}
//c二进制写入
//int main()
//{
//	int arr[] = { 12,23,34,45,56,67,89,90,100 };
//	int n = sizeof(arr) / sizeof(int);
//	FILE* fp = fopen("Test3.txt", "wb");
//	if (NULL == fp)
//	{
//		cerr << "Open Test.txt file failed." << endl;
//		exit(1);
//	}
//	//fread(arr, sizeof(int), n, fp);
//	fwrite(arr, sizeof(int), n, fp);
//	fclose(fp);
//	return 0;
//}
//int main()
//{
//      string name;
//      string city;
//      cout << "Please enter your name: ";
//      getline(cin, name);//
//      cout << "Enter the city you live in: ";
//      getline(cin, city);
//      cout << "Hello, " << name << endl;
//      cout << "You live in " << city << endl;
//      return 0;
//}
//    


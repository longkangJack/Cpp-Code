#include<iostream>
#include<stdio.h>
using namespace std;
class sample {

public:
	sample(int x)
	{
		p = new int(x);
	}
	~sample() {
		if (p) delete p;
	}
	int show() {
		return *p;
	}
private:
	int* p;
};
struct A {
	unsigned a : 19;
	unsigned b : 11;
	unsigned c : 4;
	unsigned d : 29;
	char index;
};
//int main()
//{
//	sample s(5);
//	cout << s.show() << endl;
//	cout << sizeof(struct A) << endl;
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int* b = a;
//	*b += 2;
//	*(b + 2) = 2;
//	b++;
//	cout << *b << endl;
//	cout << *(b + 2) << endl;
//	return 0;
//}

//int main()
//{
//	char a[10] = { '1','2','3','4','5','6','7','8','9',0 };
//	char* p;
//	int i;
//	i = 8;
//	p = a + i;
//	printf("%s\n", p - 3);
//	return 0;
//}
int func()
{
	int i=0;
	int j=0;
	int k = 0;
	for (i = 0, j = -1; j = 0; i++, j++)
	{
		k++;
	}
	return k;
}
int main()
{
	cout << (func());
}
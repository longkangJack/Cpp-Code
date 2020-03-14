#include<iostream>
using namespace std;

class Base
{
public:
	void Print()
	{
		cout << name << endl;
		cout << age << endl;
	}
private:
	string name = "peter";
	int age = 18;
};
class A : public Base
{
protected:
	int study;
};
int main()
{
	A s;
	
	return 0;
}
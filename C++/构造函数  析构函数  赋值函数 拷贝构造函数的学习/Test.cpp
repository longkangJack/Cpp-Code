#include<iostream>
#include<assert.h>
using namespace std;

class Int
{
	friend ostream& operator<<(ostream& out, const Int& x);
	friend istream& operator>>(istream& in, Int& x);
public:
	Int(int i = 0):m_i(i)
	{}
	~Int()
	{}
public:
	Int operator+(const Int& x);
	Int operator-(const Int& x);
	Int operator*(const Int& x);
	Int operator/(const Int& x);
	Int operator%(const Int& x);
public:
	//a+=b
	Int& operator+=(const Int& x);
	Int& operator-=(const Int& x);
	Int& operator*=(const Int& x);
	Int& operator/=(const Int& x);
	Int& operator%=(const Int& x);
public:
	bool operator==(const Int& x);
	bool operator!=(const Int& x);
	bool operator>(const Int& x);
	bool operator<=(const Int& x);
	bool operator<(const Int& x);
	bool operator>=(const Int& x);
private:
	int m_i;
};
ostream& operator<<(ostream& out, const Int& x)//�����
{
	out << x.m_i;
	return out;
}
istream& operator>>(istream& in, Int& x)//������
{
	in >> x.m_i;
	return in;
 }
Int Int::operator+(const Int& x)
{
	return Int(m_i +x.m_i );
}
Int Int::operator-(const Int& x)
{
	return Int(m_i - x.m_i);
}
Int Int::operator*(const Int& x)
{
	return Int(m_i * x.m_i);
}
Int Int::operator/(const Int& x)
{
	return Int(m_i / x.m_i);
}
Int Int::operator%(const Int& x)
{
	return Int(m_i % x.m_i);
}
/////////////////////////////////////////////////////
Int& Int::operator+=(const Int& x)
{
	m_i += x.m_i;
	return *this;
}
Int& Int::operator-=(const Int& x)
{
	m_i -= x.m_i;
	return *this;
}

Int& Int::operator*=(const Int& x)
{
	m_i *= x.m_i;
	return *this;
}

Int& Int::operator/=(const Int& x)
{
	m_i /= x.m_i;
	return *this;
}
Int& Int::operator%=(const Int& x)
{
	m_i %= x.m_i;
	return *this;
}
//////////////////////////////////////////////////////////////
bool Int::operator==(const Int& x)
{
	return m_i == x.m_i;
}
bool Int::operator!=(const Int& x)
{

	//return m_i != x.m_i;

	return !(*this == x);
}
bool Int::operator>(const Int& x)
{
	return m_i > x.m_i;
}
bool Int::operator<=(const Int& x)
{
	//return m_i <= x.m_i;
	return !(*this > x);
}

bool Int::operator<(const Int& x)
{
	return m_i < x.m_i;
}
bool Int::operator>=(const Int& x)
{

	//return m_i >= x.m_i;
	return !(*this < x);
}
void main()
{
	/*Int i;
	cin >> i;
	cout << i << endl;*/
	Int a = 5;
	Int b = 2;
	Int v = a %=b;
	cout << "v = " << v << endl;

}



/*class Date 
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
public:
	int _year;
	int _month;
	int _day;
};
bool operator == (const Date& d1, const Date& d2)
{
	return d1._year == d2._year && d1._month == d2._month && d1._day == d2._day;
}
void main()
{
	Date d1(2018, 9, 26);
	Date d2(2018, 9, 26);
	cout << (d1 == d2) << endl;
}
/*class Complex;
class Complex
{
	friend void Print(const Complex& C);//��Ԫ    //���ǳ�Ա
public:
	Complex(int real = 0,int imag = 0):m_real(real),m_imag(imag)
	{}
	~Complex()
	{}
public:
	int GetReal()const
	{
		return m_real;
	}
	int GetImag()const
	{
		return m_imag;
	}
public:
	Complex operator+(const Complex& c)
	{
		return Complex(m_real + c.m_real, m_imag + c.m_imag);
	}
private:
	int m_real;
	int m_imag;
};
void Print(const Complex& C)
{
	cout << C.GetReal() << "+" << C.GetImag() <<'i'<< endl;
}
void main()
{
	Complex c1(1, 2);
	Complex c2(3, 5);
	Print(c1);

}
/*class Test
{
public:
	Test(int data = 0);//���캯��
	Test(const Test& t);//�������캯��
	Test& operator = (const Test& t);//��ֵ���
	~Test();//��������
public:
	Test* operator&();//ȡַ���� ����
	const Test* operator&()const;//��Գ�����
public:
	Test Add(const Test& t)
	{
		int sum = m_data + t.m_data;
		Test tmp(sum);
		return tmp;
	}
public:
	void Print()const
	{
		cout << m_data << endl;
	}
private:
	int m_data;
};

void main()
{
	Test t1(10);
	Test t2(20);
	Test t = t1.Add(t2);
	
}
/*class Date
{
public:
	Date(int year)
		:_year(year)
	{}
	explicit Date(int year)
		:_year(year)
	{}
private:
	int _year;
	int _momth;
	int _day;
};
void TestDate()
{
	Date d1(2018);
	// ��һ�����α������������Ͷ���ֵ 
	// ʵ�ʱ������������2019����һ������������������������d1������и�ֵ
}
/*class Time
{
public:
	Time(int hour = 0)
		:_hour(hour)
	{
		cout << "Time(_hour)" << endl;
	}
	void show()
	{
		cout << _hour << endl;
	}
private:
	int _hour;
};
class Date
{
public:
	Date(int day)
	{
		_day = day;
	}
private:
	int _day;
	Time _t;
};
int main()
{
	Time d1(2);
	d1.show();
	return 0;
}
/*class A
{
public:
	A(int a)
		:_a(a)
	{}
public:
	void show()
	{
		cout << _a << endl;
	}
private:
	int _a;
};
class B
{
public:
	B(int a,int ref)
		:_aobj(a)
		,_ref(ref)
		,_n(10)
	{}

private:
	A _aobj;//û��Ĭ�Ϲ��캯��
	int& _ref;//����
	const int _n;//const
};
void main()
{
	A t1(20);
	B t(30,40);
	t1.show();
}

/*class Date
{
public:
	//��ʼ��
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day)
	{}

private:
	int _day;
	int _month;
	int _year;
};

/*class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		_pdata = (int*)malloc(capacity * sizeof(int));
		assert(_pdata);
		_size = 0;
		_capacity = capacity;
	}
	~SeqList()
	{
		if (_pdata)
		{
			free(_pdata);
			_pdata = NULL;
			_size = 0;
			_capacity = 0;			
		}
	}
private:
	int* _pdata;
	size_t _size;
	size_t _capacity;
};
/*class Date
{
public:
	Date(int year)
	{
		_year = year;
	}
	void Display()
	{
		cout << _year << endl;
	}
private:
	int _year;
};
void main()
{
	Date d1(2019);
	d1.Display();
}
/*class Date
{
public:
	//����û������˹��캯�������������������
	//Date(int year, int month, int day)
	//{
		//_year = year;
		//_month = month;
		//_day = day;
	//}
private:
	int _year;
	int _momth;
	int _day;
};
void main()
{
	Date d;
}
/*class Date
{
	//1.�޲ι��캯��
	Date()
	{}
	//2.�������Ĺ��캯��
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void TestDate()
	{
		Date d1;//�����޲������캯��
		Date d2(2019, 1, 1);//���ô������Ĺ��캯��
		Date d3;
	}
private:
	int _year;
	int _month;
	int _day;
};
void main()
{
	Date TestDate();
}
/*class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;		
	}
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1, d2;
	d1.SetDate(2019, 11, 30);
	d1.Display();
	d2.SetDate(2019, 11, 29);
	d2.Display();
	return 0;
}*/
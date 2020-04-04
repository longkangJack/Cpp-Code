## **什么是string

1、基本概念

本质

string是C++风格的字符串，而string本质上是一个类

string和char *区别：

char*是一个指针,string是一个类，内部封装了char * ，管理这个字符串，是一个char *型的容器

特点：

string类内部封装了很多成员方法
例如：查找find，拷贝copy，删除delete 替换replace，插入insert
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

2、构造函数原型
创建一个空的字符串例如：string

```c++
string str;
```

使用字符串str初始化

使用字符串str初始化

```C++
 const char* str="hello";
 string s1(str);
 cout<<s1<<endl;

```

使用一个string对象初始化另一个string对象

```C++
const char* str="hello";
string s1(str);
string s2(s1);

```

使用n个字符c初始化

```C++
string s2(10,'a');
cout<<s2<<endl;

```

3、赋值操作

char *类型字符串赋值给当前的字符串

```C++
string str;
str="hello world";
cout<<"str="<<str<<endl;

```

把字符串s赋给当前的字符串

```C++
string str;
str="hello world";
string str1;
str1=str;
cout<<"str1="<<str1<<endl;

```

字符赋值给当前的字符串

```C++
string str;
str='a';
cout<<"str="<<str<<endl;

```

把字符串s赋给当前的字符串

```C++
string str;
str.assign("hello world");

```

把字符串s的前n个字符赋给当前的字符串

```c++
string str;
str.assign("hello world",5);
cout<<"str="<<str<<endl;

```

把字符串s赋给当前字符串

```c++
string str;
str.assign("hello world",5);
string str1;
str1.assign(str);
cout<<"str1="<<str1<<endl;

```

用n个字符c赋给当前字符串

```c++
string str;
str.assign(5,'m');
cout<<"str="<<str<<endl;

```

4、字符串拼接

（1）重载+=操作符

```c++
string str="我";
str+=("爱玩游戏");
str+=(";");
cout<<"str="<<str<<endl;123
```

```c++
string str="我";
str+=("爱玩游戏:");
string str1="王者荣耀";
str+=(str1);
cout<<"str="<<str<<endl;1234
```

(2)追加字符串
把字符串s连接到当前字符串结尾

```c++
string str="I";
str.append(" love");
cout<<"str="<<str<<endl;

```

把字符串s的前n个字符连接到当前字符串结尾

```c++
string str="I";
str.append(" love ");
str.append("game,aaaa",4);
cout<<"str="<<str<<endl;123
```

同operator+=（const string&str）

```c++
string str="I";
str.append(" love ");
str.append("game,aaaa",4);
string str2="：王者荣耀";
str.append(str2);
cout<<"str="<<str<<endl;12345
```

字符串s中从pos开始的n个字符连接到字符串结尾

```c++
string str="I";
str.append(" love ");
str.append("game,aaaa",4);
string str2="wangzherongyao";
str.append(str2,0,7);
cout<<"str="<<str<<endl;

```

5、查找和替换
find是从左往右，rfind是从右往左
（1）查找str第一次出现位置，从pos开始查找
`string str="abcdef";`
`int pos=str.find("de");`
`if(pos==-1)`
`{`
    `cout<<"未找到"<<endl;`
`}`
`else`
`{`
 `cout<<"找到字符串下标为："<<pos<<endl;`
`}`
（2）查找s第一次出现位置，从pos开始查找
int find（const char *s，int pos=0）const；
（3）从pos位置查找s的前n个字符第一次位置
int find（const char*s，int pos，int n）const；
（4）查找字符c第一次出现位置
·int find（const char c，int pos =0）const
（5）查找str最后一次位置，从pos开始查找
·int rfind（const string&str，int pos =npos）const；
（6）查找s最后一次出现位置，从pos开始查找
·int rfind（const char *s，int pos =npos）const；
（7）从pos查找s的前n个字符最后一次位置
·int rfind（const char*s，int pos，int n）const
（8）查找字符c最后一次出现位置
int rfind（const char c，int pos=0）const
（9）替换从pos开始n个字符为字符串str

```
·string& replace（int pos，int n，const  string& str）
```

（10）替换从pos开始的n个字符为字符串s
函数原型

```c++
string& replace（int pos，int n，const char* s）；
```

```c++

string str="abcdef";
str.replace(1,3,"11111");
cout<<"str="<<str;
```

6、比较
函数原型

6、比较
函数原型

```c++
int compare(const string &s)const;
int compare(const char *s)const;
```

代码

代码

```c++
string str1="abc";
string str2="abc";
if(str1.compare(str2)==0)
{
    cout<<"str1=str2"<<endl;
}
```

7、字符存取
str.size()可以返回字符串长度
读取

修改

7、字符存取
str.size()可以返回字符串长度
读取

修改

```c++
string str="abcde";
str[0]='q';
cout<<"str="<<str<<endl;
str.at(1)='q';
cout<<"str="<<str<<endl;
```

8、插入和删除

8、插入和删除

```c++
·string& insert（int pos，const char* s）；//插入字符串
·string& insert（int pos，const string&str）；//插入字符串
·string& insert（int pos，int n，char c）；//在指定位置插入n个字符c·string& erase（int pos，int n=npos）；
//删除从Pos开始的n个字符
```

插入和删除的下标都是从0开始的
代码

```c++
string str="abcde";
str.insert(1,"111");
cout<<"str="<<str<<endl;
str.erase(1,3);
cout<<"str="<<str<<endl;
```

9、子串
从字符串中截取一段字串
函数原型

9、子串
从字符串中截取一段字串
函数原型

```c++
string   substr(int   pos= 0, int  n = npos) const;
```

代码

代码

```c++
#include<iostream>
using namespace std;
int main()
{
    string str="abcde";
    string str1=str.substr(1,3);
    cout<<str1<<endl;
    string email="2806605169@qq.com";
    int pos=email.find("@");
    cout<<"qq为："<<email.substr(0,pos)<<endl;

}
```



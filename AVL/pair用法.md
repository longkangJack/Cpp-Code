## pair用法

pair是c++中的一种模板类型，存储两个数值类型，既可以是已经存在的，也可以是自己定义的数值类型。

 

#### 1.pair的声明：

```C++
pair<int,string> p1;
pair<int,string> p2(1,"123");

```

**在声明的数据类型中也可以为自己定义的数据类型**
 **声明中即可以对其进行初始话，也可以不初始化，之后在对其进行赋值。当然了，也可以声明成为数组。**
 **2.pair的用法**

```C++
//1.用make_pair()进行赋值
p1 = make_pair(1,"234");
//2.pair 中存储有两个数据，这两个数据可以通过.first 和.second
//来调用。因此，可以用这种方法进行赋值或输出
p1.first = 1;p1.second = "234";

```

**3.pair的排序**

```C++
//1.把pair本身放到vector中
//为sort函数创建一个cmp排序规则
//根据第一个数从大到小排序
bool cmp(pair<int,string>p1,pair<int,string>p2)
{
	return p1.first>=p2.first;
}
int main(){
	vector<pair<int,string> > s;
	s.pb(mp(1,"12313"));
	s.pb(mp(2,"123"));
	s.pb(mp(1,"123"));
	sort(s.begin(),s.end(),cmp);
	for(auto x : s)
		cout<<x.first<<"  "<<x.second<<endl;
	return 0;
}
//2.pair自己本身比较大小的规则是先比较第一个数的大小，然后再比较第二个数的大小，因此也可以直接用pair的数组来表示这里不在举例子。

```


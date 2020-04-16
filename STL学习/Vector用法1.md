## Vector用法1

vector(向量): C++中的一种数据结构,确切的说是一个类.它相当于一个动态的数组,当程序员无法知道自己需要的数组的规模多大时,用其来解决问题可以达到最大节约空间的目的.

     用法:
          1.文件包含:     
           首先在程序开头处加上#include<vector>以包含所需要的类文件vector
          还有一定要加上using namespace std;
     
          2.变量声明:
               2.1 例:声明一个int向量以替代一维的数组:vector <int> a;(等于声明了一个int数组a[],大小没有指定,可以动态的向里面添加删除)。
               2.2 例:用vector代替二维数组.其实只要声明一个一维数组向量即可,而一个数组的名字其实代表的是它的首地址,所以只要声明一个地址的向量即可,即:vector <int *> a.同理想用向量代替三维数组也是一样,vector <int**>a;再往上面依此类推.
     
          3.具体的用法以及函数调用:
          3.1 如何得到向量中的元素?其用法和数组一样:
          例如:
          vector <int *> a
          int b = 5;
          a.push_back(b);//该函数下面有详解
          cout<<a[0];       //输出结果为5
1.push_back   在数组的最后添加一个数据
2.pop_back    去掉数组的最后一个数据 
3.at                得到编号位置的数据
4.begin           得到数组头的指针
5.end             得到数组的最后一个单元+1的指针
6．front        得到数组头的引用
7.back            得到数组的最后一个单元的引用
8.max_size     得到vector最大可以是多大
9.capacity       当前vector分配的大小
10.size           当前使用数据的大小
11.resize         改变当前使用数据的大小，如果它比当前使用的大，者填充默认值
12.reserve      改变当前vecotr所分配空间的大小
13.erase         删除指针指向的数据项
14.clear          清空当前的vector
15.rbegin        将vector反转后的开始指针返回(其实就是原来的end-1)
16.rend          将vector反转构的结束指针返回(其实就是原来的begin-1)
17.empty        判断vector是否为空
18.swap         与另一个vector交换数据

3.2  详细的函数实现功能：其中vector<int> c.
                             c.clear()         移除容器中所有数据。
                             c.empty()         判断容器是否为空。
                             c.erase(pos)        删除pos位置的数据
                             c.erase(beg,end) 删除[beg,end)区间的数据
                             c.front()         传回第一个数据。
                             c.insert(pos,elem)  在pos位置插入一个elem拷贝
                             c.pop_back()     删除最后一个数据。
                             c.push_back(elem) 在尾部加入一个数据。
                             c.resize(num)     重新设置该容器的大小
                             c.size()         回容器中实际数据的个数。
                             c.begin()           返回指向容器第一个元素的迭代器
                             c.end()             返回指向容器最后一个元素的迭代器

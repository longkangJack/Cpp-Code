## 每日一题c++



读书一个字符串str，输出字符串str中的连续最长的字符串

```c++
#include<iostream>
using namespace std;
#include<string>
void Findnum(string str)
{
    size_t i=0;
    int count=0;//计数
    int maxnum=0;//标记最大数字串长度
    int pos=0;//最大数字串的开始位置
    while(i<str.size())
    {
        while(!isdigit(str[i]))
           i++;//不是数字就往后走
        while(isdigit(str[i]))
        {
            count++;
            i++;
        }
        if(count>maxnum)
        {
            maxnum=count;//更新maxnum
            pos=i-maxnum;//标记pos
        }
        count=0;
    }
    for(int j=pos;j<pos+maxnum;j++)
        cout<<str[j];
    cout<<endl;
}
int main()
{
    string str;
    cin>>str;
    Findnum(str);
    return 0;
}
```


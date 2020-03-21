## 华为OJ-超长正整数相加

题目描述
请设计一个算法完成两个超长正整数的加法。
接口说明
 /* 请设计一个算法完成两个超长正整数的加法。 输入参数： String addend：加数 String augend：被加数 返回值：加法结果 */
 public String AddLongInteger(String addend, String augend) {     /*在这里实现功能*/
  return null;      }
输入描述:
输入两个字符串数字
输出描述:
输出相加后的结果，string型
输入例子:
99999999999999999999999999999999999999999999999999
1

输出例子:
100000000000000000000000000000000000000000000000000

```C++
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<algorithm>
#include<ctime>
using namespace std;
int main()
{
    //freopen("1.txt","r",stdin);
    char ss[512];
    string s;
    string s1,s2;
    int i,j,len1,len2,lmax;
    while(cin>>s1>>s2)
    {
        len1=s1.length();
        len2=s2.length();
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        lmax=len1>len2?len1:len2;
        int temp=0;
        int sum[512];

        int k=0,j;

        for(i=0; i<lmax; i++)

        {

            int a=0,b=0;

            if(i<len1)

                a=s1[i]-'0';

            else

                a=0;

            if(i<len2)

                b=s2[i]-'0';

            else

                b=0;

            int result=a+b+temp;

            temp=result>9?1:0;

            sum[k++]=result%10;

        }

        if(temp>0)

        {

            sum[k]=1;

            for(j=k; j>=0; j--)

                cout<<sum[j];

        }

        else

        {

            for(j=k-1; j>=0; j--)

                cout<<sum[j];

        }

        cout<<endl;

    }

    return 0;

}

```


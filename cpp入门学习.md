# cpp入门学习

一.CPP和C语言的不同 
  1.  cpp和C语言的头文件不同 
     C语言的头文件一般用



#include<stdio.h>1

而cpp的头文件为



#include<iostream>1

而在cpp的头文件之后还有 
using namespace std; 
命名空间使用namespace来声明，std命名空间是C++中标准库类型对象的命名空间，命名空间实际上是一个作用域 
2.输入和输出的区别 
c中输入输出



scanf("%d",&a);
printf("%d/n",a);12

而cpp中cout输出对象。cin为输入，endl为换行符。不使用using namespace std时  我们还可以写成std::cout<<a<<std::endl。::是域作用限定符。指定域::，当指定域为空时一般为全局域。



cin>>a//输入
cout<<a<<endl//输出12

cin和cout可以自动识别输入输出的类型，在没有指定域时一般采取就近原则输出。当命名空间嵌套使用时，要想输出相对应的命名空间中的内容如下



namespace AA1
{
   int a = 10;
   namespace AA2
   {
      int a = 30;
   }
}
//输出
cout<<AA1::a<<endl;//输出AA1的a
cout<<AA1::AA2::a<<endl;//输出AA2的a1234567891011

二.函数重载 
      在c语言中同名函数不能同时存在。而c++可以 
      定义：同一个作用域内，相同函数名，参数不同（类型不同，个数不同）可以构成函数重载（和返回值无关） 
函数重载的原理是会进行函数名修饰。如void f(int i,char a)和void f(char a,int i)就可以构成函数重载，根据函数名修饰的原理我们可以得到_Z1fic和  _Z1fci两个经过修饰之后得到的函数名，修饰之后的函数名显然是不同的，这也是c++为什么支持函数重载的原因。函数名修饰是依据函数名和之后所跟的参数类型所决定的。如 _Z1fic中 _Z是前缀，1指函数名f只占一个字节，i指int，c指char。而c语言中函数名不修饰。 
三。缺省参数 
   1. 定义：就是在声明函数的某个参数的时候为之指定一个默认值。缺省又分为全缺省和半缺省。 

    2.全缺省



int Add (int a = 10,int b = 20)
{
   return a+b;
}
int main()
{
   cout<<Add(1,2)<<endl;
   cout<<Add()<<endl;
   cout<<Add(20)<<endl;
}12345678910

3.半缺省（只能缺省右边的）



int Add (int a,int b = 20)
//有多个参数时int Add (int a,int b,int c = 30)
{
   return a+b;
}
int main()
{
   cout<<Add(10)<<endl;
   cout<<Add(10,30)<<endl;
}
1234567891011

四.指针和引用 
1.定义：引用就是某一变量（目标）的一个别名，对引用的操作与对变量直接操作完全一样。引用的声明方法：类型标识符 &引用名=目标变量名； 
   2.特点：（1）一个变量可以取多个别名 
                （2）引用必须初始化 
                （3）引用只能在初始化是引用一次，不能改变为再引用其他变量



int main()
{
  int a = 10;
  int& b = a;
  int& c = a;
  int& d = b;
}   1234567

b,c,d均为a的别名，指向同一个空间。

3.const引用



 void f()
 {
    const int c = 10;
    const int& d = c;
    //当const修饰一个变量时，引用的时候同样要加上const

    float f = 2.333;
    const int& h = f;
    //类型不同时同样要加const。改变类型会生成一个临时变量 而这个临时变量具有常性。h引用的是这个具有常性的临时变量，所以也不能赋值。
}12345678910

4.作用（1）引用做参数，比值传递的效率高 
      拿swap函数举例



//值传递
void Swap(int a,int b)
{
   int temp = a;
   a = b;
   b = temp;
}


//引用传递,形参是实参的别名
void Swap(int& a,int& b)
{
   int temp = a;
   a = b;
   b = temp;
}


//指针传递
void Swap(int* pa,int* pb)
{
   int temp = *pa;
   *pa = *Pb;
   *pb = temp;
}


（2）作返回值 
传值返回时，是将值放到eax寄存器中 
传引用返回时，是将地址放入eax寄存器中

结论：（1）.不要返回一个临时变量的使用 
（2）.如果返回对象出了当前作用域依旧存在，则使用引用作返回值，因为这样更高效

5.引用和指针的区别和联系 
  （1）引用只能在初始化是引用一次，不能改变为再引用其他变量；而指针变量的值可变 
  （2）引用必须指向有效的变量，而指针可以为空 
  （3）相对而言，引用比指针更安全，指针比引用更灵活

## 一个数组有 N 个元素，求连续子数组的最大和（动态规划问题）

该题题目如上，例如【-1，2，1】连续的最大子数组为【2，1】，和为3；

题目要求我们输入第一个数为数组元素的个数，然后后面为我们需要输入的元素。

遇到这一个题，我们首先可以这样考虑，设置一个sum和result，sum是用来每次加新的元素，result是最后得出最大的子数组和。

我们可以每次给sum中添加新的元素，从第一个开始向后，如果遇到和比result大的时候，就把sum的值赋给result，小于的话则继续向后寻找，当然我们也考虑到了如果数组中的数字为负数的时候，每次加新的数字之后，会判断sum是否为正，如果不为正数，就将sum置为0，那么在下一次加的时候，前面的负数不会考虑，因为越加会越小，但是我们还是会比较result跟sum的大小，因为即便为负数，也会存在大小问题，所以这样的话我们可以比较后面的子数组与前面的大小比较，最后找到最大值。

```C++
#include <iostream>
#include<vector>
using namespace std; 
int main() 
{ 
int size; 
cin >> size;
vector<int> nums(size);
for(size_t i = 0; i < size; ++i)
	cin >> nums[i]; 
int result = nums[0]; 
int  sum = 0;
for (int i = 0; i < nums.size(); i++) { // 计算到num[i]的子数组的最大和 
	sum +=nums[i]; 
	if(sum > result) 
		result = sum;
    if (sum < 0) 
	sum = 0;   
}
cout << result << endl;
return 0; 
}

```


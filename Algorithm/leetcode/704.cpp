#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode 704: 二分查找（数组）
#endif

vector<int> nums = {-1, 0, 3, 5, 9, 12};

int binSearch1(vector<int>& nums, int target);
int binSearch2(vector<int>& nums, int target);

int main()
{
	cout << "The array: ";	//输出数组nums
	for(auto i: nums)
		cout << i << " "; 
	cout << endl;

	int target;
	cout << "Please put in the target: ";
	cin >> target;
	int pos = binSearch2(nums, target); 
	if(pos < 0)
		cout << "The number " << target << " is not exist in the array" << endl;
	else
		cout << "The number " << target << " is in " << pos << endl;
	return 0;
}

int binSearch1(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	while(left <= right) {
		int middle = left + ((right - left)/2);		//等同于(left+right)/2 ,防止(left+right) 产生溢出
		if(nums[middle] > target)
			right = middle - 1;
		else if(nums[middle] < target)
			left = middle + 1;
		else
			return middle;
	}
	return -1;
}

int binSearch2(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size();	//由于是左开右闭:[left, right),数组最后一个元素应该在该区间内，所以 right nums.size()
	while(left < right){
		int middle = left + ((right - left)>>1);	//这里的算数右移1位与上面的除以2有什么区别？
		if(nums[middle] > target)
			right = middle;
		else if(nums[middle] < target)
			left = middle + 1;
		else
			return middle;
	}
	return -1;

}








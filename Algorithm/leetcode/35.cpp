#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode: 35.搜索插入位置（数组）
#endif

vector<int> nums = {1, 3, 5, 6};
int searchInsert_1(vector<int>& nums, int target);//暴力解法，直接遍历整个数，比较寻找位置
int searchInsert_2(vector<int>& nums, int target);
int searchInsert_3(vector<int>& nums, int target);

int test(int no, vector<int>& nums, int target); 

int main()
{
	int target;
	int pos;
	int no;

	cout << "The nums: ";	//输出nums数组，方便查
	for(auto i : nums)
		cout << i << " ";
	cout << endl;
	
	do{
		cout << "Select which fun to test(1 2 3): ";
		cin >> no;
		cout << "Please cin the target: ";
		cin >> target;
		pos = test(no, nums, target);
		cout << "The position of your target is: " << pos << endl;
	}while(pos != -1);

	return 0;
}

int searchInsert_1(vector<int>& nums, int target)
{
	for(int i = 0; i < (int)nums.size(); i++){ //nums.size()的返回类型是"std::vector<int>::size_type",与int类型不匹配，需要强制转换？？
		if(target <= nums[i])
			return i;
	}
	return nums.size();
}

int searchInsert_2(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	while(left <= right)
	{
		int middle = left + (right - left) / 2;
		if(target < nums[middle])
			right = middle - 1;
		else if(target > nums[middle])
			left = middle + 1;
		else
			return middle;
	}
	
	return (right + 1);
}

int searchInsert_3(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size(); 
	while(left < right)
	{
		int middle = left + ((right - left) >> 1);
		if(target < nums[middle])
			right = middle;
		else if(target > nums[middle])
			left = middle + 1;
		else
			return middle;
	}
	return right;
}

int test(int no, vector<int>& nums, int target)
{
	switch(no)
	{
		case 1: 
			return searchInsert_1(nums, target);
			break;
		case 2: 
			return searchInsert_2(nums, target);
			break;
		case 3: 
			return searchInsert_3(nums, target);
			break;
		default:
			break;
	}
	//return -1;
}





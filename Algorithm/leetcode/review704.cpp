#include<iostream>
#include<vector>
using namespace std;

#if 0
	用来复习之前刷过的题，写过的算法
#endif

vector<int> nums = {3, 4, 5, 9, 11, 20};

//复习二分查找，题目704
void review704();
int binSearch1(vector<int>& nums, int target);
int binSearch2(vector<int>& nums, int target);

int main()
{
	int target;
	cout << "nums: ";
	for(auto i : nums)
		cout << i << " " ;
	cout << endl;
	cout << "You target: ";
	cin >> target;
	int result = binSearch2(nums, target);
	if(result < 0)
		cout << "You target doesn't exist!" << endl;
	else
		cout << "You target's position is " << result << endl;
	return 0;
}

#if 0
int binSearch1(vector<int>& nums, int target)//闭区间[left,right]
{
	int left = 0;
	int right = nums.size() - 1;
	while(left <= right){
		int middle = left + (right - left) / 2 ;
		if(target < nums[middle])
			right = middle - 1;
		else if(target > nums[middle])
			left = middle + 1;
		else
			return middle;
	}
	return -1;
}
#endif

#if 0
int binSearch2(vector<int>& nums, int target)//左闭开[left,right)
{
	int left = 0;
	int right = nums.size();
	while(left < right){
		int middle = left + (right - left)>>1;
		if(target < nums[middle])
			right = middle;
		else if(target > nums[middle])
			left = middle + 1;
		else 
			return middle;
	}
	return -1;
}
#endif

#if 1
int binSearch1(vector<int>& nums, int target)//左闭右开[left,right)
{
	int left = 0;
	int right = nums.size();
	while(left < right)
	{
		int middle = left + (right - left) / 2;
		if(target < nums[middle]) {
			right = middle;
		}
		else if(target > nums[middle]) {
			left = middle + 1;
		}
		else {
			return middle;
		}
	}
	return -1;
}
#endif

#if 1
int binSearch2(vector<int>& nums, int target)//左闭右闭[left,right]
{
	int left = 0;
	int right = nums.size() - 1;
	while(left <= right)
	{
		int middle = left + ((right - left) >> 1);
		if(target < nums[middle]) {
			right = middle - 1;	
		}
		else if(target > nums[middle]){
			left  = middle + 1;
		}
		else{
			return middle;
		}
	}
	return -1;
}
#endif

























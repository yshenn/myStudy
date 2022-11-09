#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode 209 : 长度最小的子数组
	//一个含有n个正整数的数组和一个正整数s
	//找出和>=s的长度最小的子数组，并返回其长度，若不存在返回其长度
#endif

//vector<int> nums = {1, 2, 3, 2, 2, 3, 4}; //s = 7
vector<int> nums = {4, 6, 4, 7, 5}; //s = 13

int minSubArr_0(vector<int> &nums, int s); //暴力解法
int minSubArr_1(vector<int> &nums, int s); //滑动窗口

int main()
{
	int s;
	int minlen;
	cout << "The vector is as follow:" << endl;
	for(auto n : nums) {
		cout << n << " ";
	}
	cout << endl << "Please input the target s: ";
	cin >> s;
	//minlen = minSubArr_0(nums, s);
	minlen = minSubArr_1(nums, s);
	cout << "The minlen is " << minlen << endl;
	return 0;
}

#if 0
int minSubArr_0(vector<int> &nums, int s)
{
	int size = nums.size();
	int sum = 0;
	int minlen = 0;
	for(int i = 0; i < size; i++) {
		sum = nums[i];
		int j = i + 1;
		while((sum < s) && (j < size)) {
			sum += nums[j];	
			j++;
		}
		if(sum == s) {
			minlen = ((j - i) < minlen) ? (j - i) : minlen;
		}
	}
	return minlen;
}
#endif

#if 1
int minSubArr_1(vector<int> &nums, int s)
{
	int size = nums.size();
	int minlen = INT32_MAX;
	int sum = 0;
	int left = 0;
	int sublen = 0;
	for(int right = 0; right < size; right++) {
		sum += nums[right];
		while(sum >= s) {
			sublen = right - left + 1;
			minlen = sublen < minlen ? sublen : minlen;	
			sum -= nums[left++];
		}
	}
	return minlen == INT32_MAX ? 0 : minlen;
}
#endif

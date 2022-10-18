#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode 27: 移除元素（数组）	
#endif

//vector<int> nums = {3, 1, 2, 4, 3, 5, 6, 7, 3};
//vector<int> nums = {3, 3, 3, 3, 3};
//vector<int> nums = {1, 3, 4, 5, 3};
vector<int> nums = {3, 3, 1, 3, 3, 3, 2, 2, 3, 4, 5, 3};

int removeElement1(vector<int>& nums, int val);//暴力解法
int removeElement2(vector<int>& nums, int val);//双指针法
int removeElement3(vector<int>& nums, int val);//剩余元素顺序可以改变时，相向双指针法可以更快

int main()
{
	int val = 3;
	
	for(auto i : nums)//删除元素前，数组中的元素
		cout << i << " ";
	cout <<  endl;

	int size = removeElement2(nums, val);
	cout << "size: " << size << endl;

	for(auto i : nums)//删除元素后，数组中的元素
		cout << i << " ";
	cout <<  endl;

	return 0;
}

#if 1
int removeElement1(vector<int>& nums, int val)
{
	int pos = 0;
	int size = nums.size();//不要让两个不同类型的数之间进行比较，提前类型转换
	for(int i = 0; i < size; i++){
		if(nums[pos] == val){
			for(int j = pos; j < size - 1; j++){
				nums[j] = nums[j+1];
			}
		}
		else{
			pos++;
		}
	}
	return pos;
}
#endif

#if 0
//answer
int removeElement1(vector<int>& nums, int val)
{
	int size = nums.size();
	for(int i = 0; i < size; i++) {
		if(nums[i] == val){
			for(int j = i; j < size - 1; j++) { 
				nums[j] = nums[j+1];
			}
			i--;
			size--;
		}
	}
	return size;
}
#endif

#if 1
int removeElement2(vector<int>& nums, int val)
{
	int oldptr = 0; 
	int newptr = 0;
	while(oldptr < nums.size()){
		if(nums[oldptr] == val){
			oldptr++;
		}
		else{
			nums[newptr] = nums[oldptr];
			oldptr++;
			newptr++;
		}
	}
	return newptr;
}
#endif

#if 0
//answer
int removeElement2(vector<int>& nums, int val)
{
	int slowIndex = 0;
	for(int fastIndex; fastIndex < nums.size(); fastIndex++){
		if(nums[fastIndex] != val){
			nums[slowIndex++] = nums[fastIndex];
		}
	}
	return slowIndex;
}
#endif

#if 1
int removeElement3(vector<int>& nums, int val)
{

}
#endif







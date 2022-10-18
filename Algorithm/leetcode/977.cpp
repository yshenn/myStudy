#include<iostream>
#include<vector>
#include<algorithm> //使用标准库算法
using namespace std;

#if 0
	leetcode 977 : 有序数组的平方
#endif

//vector<int> A = {1, 2, 3, 4, 5};
//vector<int> A = {-4, -3, 2, 4, 5};
vector<int> A = {-4, -3, -1, 1, 2, 4, 5};
//vector<int> A = {1, 1, 1, 1, 1, 1, 1};
//vector<int> A = {-4, -3, -2, -1, 0, 1, 2, 3, 4};

vector<int> sortedSquares1(vector<int> A);//暴力排序：先将数组的每个元素平方，然后使用sort() 排序
vector<int> sortedSquares2(vector<int> A);//双指针法(结果允许使用额外的存储空间)
vector<int> sortedSquares3(vector<int> A);//双指针法(结果不允许使用额外的存储空间,即在原数组上进行排序)


int main()
{
	for(auto i : A)//排序前
		cout << i << " " ;
	cout << endl;

	vector<int> B = sortedSquares2(A);//排序后
	for(auto i : B)
		cout << i << " ";
	cout << endl;

	return 0;
}

vector<int> sortedSquares1(vector<int> A)
{
	for(auto& i : A)
		i *= i;
	sort(A.begin(), A.end());
	return A;
}

#if 0
vector<int> sortedSquares2(vector<int> A)
{
	int size = A.size() - 1;
	int head = 0;
	int tail = size;
	vector<int> result(size + 1);
	while(size > 0){//或者 使用size作为临界条件
		if(A[head]*A[head] < A[tail]*A[tail]){
			result[size--] = A[tail]*A[tail];
			tail--;
		}
		else if(A[head]*A[head] > A[tail]*A[tail]){
			result[size--] = A[head]*A[head];
			head++;
		}
		else{
			result[size--] = A[tail]*A[tail];
			result[size--] = A[head]*A[head];
			head++;
			tail--;
		}
		if(head == tail){
			result[size--] = A[head]*A[head];
		}
	}
	return result;
}
#endif

#if 0 
//answer
vector<int> sortedSquare2(vector<int> A)
{
	int k = A.size() - 1;
	vector<int> result(A.size(), 0);
	for(int i = 0,j = A.size() - 1; i <= j;){
		if(A[i] * A[i] < A[j] * A[j]) {
			result[k--] = A[j] * A[j];
			j--;
		}
		else{
			result[k--] = A[i] * A[i];
			i++;
		}
	}
	return result;
}
#endif

#if 0
//改写我自己的
vector<int> sortedSquares2(vector<int> A)
{
	int size = A.size() - 1;
	int head = 0;
	int tail = size;
	vector<int> result(size + 1);
	while(head <= tail){//或者 使用size作为临界条件
		if(A[head]*A[head] < A[tail]*A[tail]){
			result[size--] = A[tail]*A[tail];
			tail--;
		}
		else{
			result[size--] = A[head]*A[head];
			head++;
		}
	}
	return result;
}
#endif

#if 1
vector<int> sortedSquares3(vector<int> A)
{
	int head = 0;
	int tail = A.size() - 1;
}
#endif








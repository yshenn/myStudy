#include<iostream>
#include<vector>
using namespace std;

#if 0
this is relevant code of chapter 3 in CppPrimer
#endif

//int arr[10];

int main()
{
	//3.13 下列的vector对象各包含多少元素，这些的元素的值分别是多少
	#if 0
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	#endif

	//3.14 用cin读入一组整数，并把它们存入一个vector对象
	//注意：在linux中，文件结束符的输入是用 Ctrl+d
	#if 0
	int i;
	vector<int> v1;
	while(cin >> i)
	{
		v1.push_back(i);	
	}

	for(auto i : v1)
		cout << i << " ";
	cout << endl;
	#endif

	//3.15 改写上题程序，读入字符串
	#if 0
	string s;
	vector<string> v2;
	while(cin >> s)
		v2.push_back(s);
	for(auto s : v2)
		cout << s << endl;
	#endif

	//3.16 把练习3.13中vector对象的容量和具体内容输出出来
	#if 1	
	//vector<int> v1;
	//vector<int> v2(10);
	//vector<int> v3(10, 42);
	//vector<int> v4{10};
	//vector<int> v5{10, 42};
	//vector<string> v6{10};
	//vector<string> v7{10, "hi"};
	
	#endif

	//3.31 & 3.32
	#if 0
	int arr[10] = {};
	int i = 0;
	cout << "array: ";
	for(auto j : arr)
		cout << j << " ";
	cout << endl;
	
	for(auto& j : arr) {//注意要用引用取得数组的每一个元素 auto& int&
		j = i++;
	}

	for(auto j : arr)
		cout << j << " ";
	cout << endl;

	#endif

	#if 0
	int arr[5] = {0, 1, 2, 3, 4};
	int *p = &arr[5];
	p++;
	cout << p[-2] << endl;

	#endif

	//验证二维数组名（指针）与其 解引用 的含义
	//从变量及变量存储的值的角度上看，arr 和 *arr 没有区别，他们都指向同一个地址
	//但从其含义上来看，二者有区别，arr是数组的数组的名字，指向外层数组的第一个元素，该元素也是一个数组，如果对其进行自增，则其指向下一个数组，即不要从多维的角度去理解，要从嵌套的角度去理解，把内层的数组看作外层数组的元素
	//而*arr 是arr的第一个元素的名字，即内层第一个数组的名字，相当于一个一维数组的名字，叫做'*arr'
	#if 0
	int arr[3][4];
	int cnt = 0;
	for(auto &row : arr)
		for(auto &col : row) {
			col = cnt++;
		}
	
	for(auto &row : arr)
		for(auto &col : row) {
			cout << col << " ";
		}
	cout << endl;

	auto p = arr;
	cout << p << endl;
	cout << *p << endl;
	cout << **p << endl;

	//arr++;//不可以对数组名进行运算
	//数组名相当于指针常量
	cout << ++p << endl;
	//cout << ++*p << endl;//*p是数组的名字，同样不能对其进行自增运算，得是指针变量
	auto q = *p;
	cout << ++q << endl;//相当于arr[1] + 1
	cout << ++**p << endl;//相当于++arr[1][0]
	#endif

	//验证p114 中for语句处理多维数组时，出了最内层循环，其他所有循环的控制变量都应该是引用类型
	#if 0
	int ia[3][4];
	int cnt = 0;
	for(auto &row : ia)
		for(auto &col : row) {
			col = cnt++;
		}
	
	for(auto row : ia)
		for(auto col : row) {
		cout << col << " ";
		}
	cout << endl;

	#endif

	#if 0
	int i = 0;
	cout << i << " " << ++i << endl;
	
	bool b = -1;
	if(b)
		cout << "b is true" << endl;
	#endif

	#if 0
	short short_value = 32767;
	short_value += 1;
	cout << "short_value: " << short_value << endl;
	#endif

	#if 0
	int i;
	if(i = 1)
		cout << "if(i = 1) is true" << endl;
	if(i = 0)
		cout << "if(i = 0) is true" << endl;
	#endif

	#if 1
	int i = 1;
	i = i++;
	cout << i <<endl;
	#endif










	return 0;
}

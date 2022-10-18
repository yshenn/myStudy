#include<iostream>
using namespace std;

int noReturnTest_1(int arg1, int arg2);//带参数，没有return语句
int noReturnTest_2();//不带参数，没有return语句

int main()
{
	int arg1, arg2;
	cout << "cin the arg1: ";
	cin >> arg1;
	
	cout << "cin the arg2: ";
	cin >> arg2;

	cout << "The return value of noReturnFunc with args: " 
		 << noReturnTest_1(arg1, arg2) << endl;

	cout << "The return value of noReturnFunc with no args: "
		 << noReturnTest_2() << endl;
	
	return 0;
}

int noReturnTest_1(int arg1, int arg2){}

int noReturnTest_2(){}


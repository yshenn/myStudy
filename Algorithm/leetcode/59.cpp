#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode 59 : 螺旋矩阵
#endif

vector<vector<int>> spinMatrix(int n);

int main()
{
	int n;
	cout << "Please give the target n: ";
	cin >> n;
	vector<vector<int>> res(n, vector<int>(n,0));
	res = spinMatrix(n);
	cout << "The result matrix is as follow:" << endl;
	for(auto row : res) {
		for(auto col: row) {
			cout << col << " ";
		}
		cout << endl;
	}
	return 0;
}

vector<vector<int>> spinMatrix(int n)
{
	int num = 1;
	vector<vector<int>> res(n, vector<int>(n,0));
	int times = 2 * n - 1; //旋转的次数为 2n-1
	int rown = 0, coln = 0;
	while(times > 0) {
		int step = (times + 1) / 2;//每旋转一次要走的步数
		int k;
		if((times % 2) == 1) { //向左或向右
			if((step % 2) == (n % 2)) { //向右
				for(k = coln; k < (coln + step); k++) {
					res[rown][k] = num++;	
				}
				times--;
				rown++;
				coln = k - 1;
			}
			else { //向左
				for(k = coln; k > (coln - step); k--) {
					res[rown][k] = num++;
				}
				times--; 
				rown--;
				coln = k + 1;
			}
		}
		else { //向上或向下
			if((step % 2) != (n % 2)) { //向下
				for(k = rown; k < (rown + step); k++) {
					res[k][coln] = num++;
				}
				times--;
				coln--;
				rown = k - 1;
			}
			else { //向上
				for(k = rown; k > (rown - step); k--) {
					res[k][coln] = num++;
				}
				times--;
				coln++;
				rown = k + 1;
			}
		}
	}

	return res;
}

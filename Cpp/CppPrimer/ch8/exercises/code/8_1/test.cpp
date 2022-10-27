#include<iostream>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s)) {
		cout << s << endl;
	}
	cout << cin.rdstate() << endl;
	cin.clear();
	cin.ignore();
	cin >> s;
	cout << s << endl;
	return 0;
}

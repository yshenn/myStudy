#include<iostream>
#include<fstream>
#include<string>
#include<limits>
using namespace std;

istream& extractData(istream &strm);

int main()
{
//	ifstream strm("input.txt");	
//	istream result;
	char ch1, ch2;
	int i;
	string s;
	extractData(cin);
	//if(cin.good()) {
	//	cout << "cin is good" << endl;
	//}
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//cin >> ch1;
	//cin >> ch2;
	//cin >> i;
	cout << cin.rdstate() << endl;
//	cout << cin.eofbit << endl; //2
//	cout << cin.failbit << endl; //4
//	cout << cin.badbit << endl; //1
//	cout << cin.goodbit << endl; //1
	cin.clear();
	cout << cin.rdstate() << endl;
	cin >> i;
	cout << i << endl;
	getline(cin, s);
	cout << s << endl;
	cout << "aline" << endl;
	cout << "aline" << endl;
//	result = extractData(strm);
	return 0;
}

istream& extractData(istream &strm) {
	auto old_state = strm.rdstate();
	string str;
	while(!strm.eof()) {
		getline(strm, str);
		cout << str << endl;
	}
	//strm.setstate(old_state);
	cout << strm.rdstate() << endl;
//	strm.clear();
	return strm;
}

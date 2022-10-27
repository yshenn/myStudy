### 8.1
look the code: ./code/8_1

### 8.2
look the code in 8.1

### 8.3
`cin >> i`作为条件使用时，相当于`!cin.fail()`
cin处于非good状态时，即 `fail()`返回true
- 当流达到文件末尾时, eofbit、failbit 同时被置位
- 当流崩溃时, badbit、failbit 同时被置位

如果 iostate 是一个无符号整数，那其低三位作为对应的状态位
例如：
	假设为16位无符号整数
	00000000 00000==000==-->三位状态位，
	经过验证，三位分别表示（从左至右）：
	- failbit
	- eofbit
	- badbit
	(goodbit的值固定为0，即当stream::iostate的值为0是，表示good)
```c++
	cout << cin.eofbit << endl;		//	2
	cout << cin.failbit << endl;	//	4
	cout << cin.badbit << endl;		//	1
	cout << cin.goodbit << endl;	//	0
```

### 8.4
look the code: code/8_4;


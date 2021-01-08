#include<iostream>
//#include"secondfile.h"

using namespace std;

/*
int global = 64;

void func(){
	static int staticVar = 0;
	staticVar++;
	cout << "func was called " << staticVar  << " times." << endl;
	global = 55;
}
*/
enum Color{Red='r', Green='g', Blue='b'};

int main(){
	/*
	//cout << average(4,5) << endl;
	global = 14;
	func();
	cout << global << endl;
	func();
	cout << global << endl;
	func();
	cout << global << endl;
	func();
	cout << global << endl;
	*/
	Color c = Red;
	switch (c)
	{
	case Red: 
		cout << "c is red" << endl;
		break;
	
	case Green: 
		cout << "c is green" << endl;
		break;

	case Blue: 
		cout << "c is blue" << endl;
		break;

	default:
		break;
	}
	cout << Red << endl;
	cout << Green << endl;
	cout << Blue << endl;
	return 0;
}

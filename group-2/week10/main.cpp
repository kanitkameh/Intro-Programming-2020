#include<iostream>
//#include"pesho.h"
using namespace std;

int globalVar = 15;
void func(){
	static int staticVar = 0;
	staticVar++;
	globalVar=20;
	//cout << globalVar << endl;
	cout << staticVar << endl;
}

enum Color {Red, Green, Blue};

int main(){
	/*
	func();
	func();
	func();
	func();
	func();
	func();
	//average(4,5);
	cout << globalVar << endl;
	*/
	Color c = Red;
	/*
	cout << c << endl;
	cout << Red << endl;
	cout << Green << endl;
	cout << Blue << endl;
	*/
	/*
	switch(c){
		case 0:
			cout << "c is Red" << endl;
			break;
		case 1:
			cout << "c is Green" << endl;
			break;
		case 2:
			cout << "c is Blue" << endl;
			break;
		default:
			cout << "undefined" << endl;
			break;
	}
	*/
	switch(c){
		case Red:
			cout << "c is Red" << endl;
			break;
		case Green:
			cout << "c is Green" << endl;
			break;
		case Blue:
			cout << "c is Blue" << endl;
			break;
		default:
			cout << "undefined" << endl;
			break;
	}
	
	return 0;
}
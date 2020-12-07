#include<iostream>
#include<cstring>
#include"pesho.h" 
#define MAX_SIZE 50

using namespace std;

int main(){
	/*
	cout << average(4.0, 5.0) << endl;
	int array[MAX_SIZE];	
	for(int i=0;i<MAX_SIZE;i++){
		cin >> array[i];
	}
	for(int i=0;i<MAX_SIZE;i++){
		cout << array[i] << " ";
	}
	*/
	//char str3;
	char str2[MAX_SIZE];
	char str1[MAX_SIZE];
	cin >> str1;
	//gives the number of characters in a string before \0
	//cout << strlen(str1);
	//cin >> str2;
	//cout << strcmp(str1,str2) << endl;
	//strncpy(str2,str1,4);
	cin >> str2;
	cout << str2 << endl;
	strncat(str1,str2,(MAX_SIZE-1)-strlen(str1));
	cout << str2 << endl;
	cout << str1 << endl;
	/*if(str3=='H'){
		cout << "you have admin rights" << endl;
	}*/
	return 0;
}
#include<iostream>
#include<cstring>

using namespace std;

//Endless recursion => stack overflow
void func(int b){
	cout << b;
	func(b);
}

char * combine(char * a, char * b){
	char * result = new char[strlen(a)+strlen(b)+1];
	int lenA = strlen(a);
	int lenB = strlen(b);
	for(int i=0;i<lenA;i++){
		result[i]=a[i];
	}
	for(int i=0;i<lenB;i++){
		result[lenA+i]=b[i];
	}
	result[lenA+lenB]=0;
	return result;
}
char * appendChar(char * string, char c){
	int len = strlen(string);
	char * result = new char[len+2]; 
	for(int i=0;i<len;i++){
		result[i]=string[i];
	}
	result[len]=c;
	result[len+1]=0;
	return result;
}
char * readLine(){
	int currentSize=1;
	char * str = new char[currentSize];
	*str=0;
	char currentChar;
	do{
		cin >> noskipws >> currentChar; //noskipws means that we read the new lines and spaces from console
		if(currentChar!='\n'){
			char * appended = appendChar(str,currentChar); 
			delete[] str;
			str = appended;
		}
	}while(currentChar!='\n');
	return str;
}
/*
//heap overflow
void func2(){
	combine("ala bala", "text");
	func2();
}
*/
bool isPalindrome(char * s){
	for(int i=0;i<strlen(s)/2;i++){
		if(s[i]!=s[(strlen(s)-1)-i]){
			return false;
		}
	}
	return true;
}

void printReverseString(char * s){
	for(int i=strlen(s)-1;i>=0;i--){
		cout << s[i];
	}
	cout << endl;
}
bool linearSearch(int* arr, int length, int element){
	for(int i=0;i<length;i++){
		if(arr[i]==element){
			return true;
		}
	}
	return false;
}
int main(){
	/*
	char * single = new char;
	*single = 'c';
	cout << *single << endl;
	delete single;
	*/
	cout << readLine() << endl;
	cout << isPalindrome("debel arab bara lebed") << endl;
	cout << isPalindrome("lebed") << endl;
	printReverseString("Hello");
	cout << "We use \"\" to write strings";
	/*
	char s1[15];
	char s2[15];
	//char* c = "My name is Pesho";
	//cout << c << endl;
	cin >> s1 >> s2 ;
	/*
	for(int i=0;i<15;i++){
		cout << s1[i];
	}
	for(int i=0;i<15;i++){
		cout << s2[i];
	}
	cout << endl;
	//func2();

	char * combined = combine(s1,s2);
	cout << combined << endl;
	delete[] combined;
	*/
	return 0;
}

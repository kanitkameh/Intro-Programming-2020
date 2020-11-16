#include<iostream>
#include<string.h>

using namespace std;

bool isPalindrome(char * s){
	int len = strlen(s);
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]){
			return false;	
		}
	}
	return true;
}
void reversePrint(char * s){
	int len = strlen(s);
	for(int i=len-1;i>=0;i--){
		cout << s[i];
	}

}
void reverseString(char * s){
	int len = strlen(s);
	for(int i=0;i<len/2;i++){
		swap(s[i],s[len-1-i]);
	}
}


void printArray(int* arr, int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << endl;
	}
}

int findMax(int* arr, int size){
	int max=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

//increments the given variable
void incrementPointer(int* x){
	(*x)++;
	cout << x << endl;
	cout << *x << endl;
}
//doesn't increment the outside variable because it is a different variable
void increment(int x){
	x++;
	cout << &x << endl;
	cout << x << endl;
}
void swap(char* a, char* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void insertionSortArray(int* n, int size){
    for(int i=1;i<size;i++){
        for(int j=i;j>0 && n[j]<n[j-1];j--){
            swap(&n[j],&n[j-1]);
        }
    }
}
//wrong!!!
/*
void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}*/

int main(){
	/*
	int a = 15;
	int a2 = 16;
	int a3 = 25;
	
	cout << "a: "<< a << " &a: "<< &a << endl;
	//a=-5;
	//cout << "a: "<< a << " &a: "<< &a << endl;

	cout << "a2: "<< a2 << " &a2: "<< &a2 << endl;
	cout << "a3: "<< a3 << " &a3: "<< &a3 << endl;
	int* b = &a3;
	cout << "b: " << b << " &b: " << &b <<  " *b: " << *b << endl;
	b++;
	cout << "b: " << b << " &b: " << &b <<  " *b: " << *b << endl;
	b++;
	cout << "b: " << b << " &b: " << &b <<  " *b: " << *b << endl;
	//pointer to pointer
	int** c = &b;
	cout << "c: " << c << " &c: " << &c <<  " *c: " << *c << " **c: "<< **c << endl;
	*/
	/*
	int x = 12;
	//increment(x);
	incrementPointer(&x);
	cout << &x << endl;
	cout << x << endl;
	*/
	/*
	int a = 15;
	int b = 56;
	int& c = a;
	c++;
	cout << &a << endl;
	cout << &c << endl;
	swap(&a,&b);
	cout << "a: " <<  a << " b: " << b << endl;
	*/

	//int array[10];
	/*
	//the two lines below are equivalent
	*array=15;
	array[0]=15;
	//the two lines below are equivalent
	*(array+1)=13;
	array[1]=13;

	cout << array << endl;
	cout << *array << endl;
	cout << *(array+1) << endl;
	*/
	//you can't change the address of arrays
	//array++;
	/*
	for(int i=0;i<10;i++){
		cin >> array[i];
	}
	insertionSortArray(array,10);
	printArray(array,10);
	cout << findMax(array,10);
	*/
	/*

	//the two statements below are the same
	*array = 15;
	array[0] = 15;

	//the two statements below are the same
	*(array+1) = 19;
	array[1] = 19;
	
	cout << "array: " << array << " *array " << *array << endl;
	*/
	char name[40];
	cin >> name;
	cout << strlen(name) << " " << name << endl;
	//cout << strcmp("Kamen Vakavchiev", "Kamen Vakavchiev") << endl;
	//reverseString(name);	
	//cout << strlen(name) << " " << name << endl;
	//reversePrint(name);
	cout << isPalindrome(name) << endl;
	return 0;
}

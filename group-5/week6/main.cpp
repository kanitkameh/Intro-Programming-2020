#include<iostream>

using namespace std;

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
}
//doesn't increment the outside variable because it is a different variable
void increment(int x){
	x++;
	cout << &x << endl;
	cout << x << endl;
}
void swap(int * a, int * b){
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

int main(){
	/*
	cout << "Hello world" << endl;
	int a = 15;
	int a2 = 16;
	int a3 = 25;
	
	cout << "a: "<< a << " &a: "<< &a << endl;
	a=-5;
	cout << "a: "<< a << " &a: "<< &a << endl;

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
	cout << "c: " << c << " &c: " << &c <<  " *c: " << *c << endl;
	*/
	int x = 12;
	//increment(x);
	incrementPointer(&x);
	cout << &x << endl;
	cout << x << endl;

	int array[10];
	//you can't change the address of arrays
	//array++;
	for(int i=0;i<10;i++){
		cin >> array[i];
	}
	insertionSortArray(array,10);
	printArray(array,10);
	//cout << findMax(array,10);
	/*

	//the two statements below are the same
	*array = 15;
	array[0] = 15;

	//the two statements below are the same
	*(array+1) = 19;
	array[1] = 19;
	
	cout << "array: " << array << " *array " << *array << endl;
	*/
	return 0;
}

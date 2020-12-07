#include<iostream>
#include<cstring>

using namespace std;

bool linearSearch(int* arr, int length, int element){
	for(int i=0;i<length;i++){
		if(arr[i]==element){
			return true;
		}
	}
	return false;
}
bool binarySearchHelperFunction(int* arr, int element, int start, int end){
	int middleIndex = (start+end)/2;
	int middle = arr[middleIndex];
	if(start==end && arr[start]!=element){
		return false;
	}
	if(middle==element){
		return true;
	} else if(middle > element){
		return binarySearchHelperFunction(arr, element, start, middleIndex-1);
	}else{
		return binarySearchHelperFunction(arr, element, middleIndex+1, end);
	}
}
//Segmentation fault!!! Do not return statically allocated arrays
int* getArray(){
	int arr[15];
	return arr;
}
bool binarySearch(int* arr, int length, int element){
	return binarySearchHelperFunction(arr,element,0,length-1);
}
int main(){
	/*
	int arr[10];
	for(int i=0;i<10;i++){
		cin >> arr[i];
	}
	int element;
	cin >> element;
	cout << linearSearch(arr,10,element) << endl;
	cout << binarySearch(arr,10,element) << endl;
	*/
	//error
	//cout << getArray()[7] << endl;
	int rows = 10000;
	int cols = 10000;

	//static allocated 2d array
	int array2[4][3];

	//dynamic allocated 2d array
	int** array = new int*[rows];
	for(int i=0;i<rows;i++){
		array[i] = new int[3];
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin >> array[i][j];
		}
	}
	cout << "========" << endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	//free dynamically allocated memory
	for(int i=0;i<rows;i++){
		delete[] array[i];
	}
	delete[] array;
	return 0;
}

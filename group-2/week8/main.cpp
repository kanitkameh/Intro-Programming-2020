#include<iostream>
#include<cstring>

using namespace std;
char wall = '#';
char player = 'P';
char goal = 'G';
char visited = 'X';
bool canReachGoal(char** labyrint, int rows, int cols, int rowPos, int colPos){
	if(rowPos<0 || rowPos > rows-1){
		return false;
	}
	if(colPos<0 || colPos > cols-1){
		return false;
	}
	if(labyrint[rowPos][colPos]==wall){
		return false;
	}
	if(labyrint[rowPos][colPos]==visited){
		return false;
	}
	if(labyrint[rowPos][colPos]==goal){
		return true;
	}
	labyrint[rowPos][colPos] = visited;
	return canReachGoal(labyrint,rows,cols,rowPos-1,colPos) || 
	canReachGoal(labyrint,rows,cols,rowPos+1,colPos) ||	
	canReachGoal(labyrint,rows,cols,rowPos,colPos-1) ||
	canReachGoal(labyrint,rows,cols,rowPos,colPos+1);
}

bool linearSearch(int* array, int len, int element){
	for(int i=0;i<len;i++){
		if(array[i]==element){
			return true;
		}
	}
	return false;
}

bool binarySearchHelperFunction(int* array, int element, int start, int end){
	int mid = (start+end)/2;
	if(element==array[mid]){
		return true;
	}
	if(start>=end){
		return false;
	}
	if(element>array[mid]){
		return binarySearchHelperFunction(array, element, mid+1, end);
	}
	return binarySearchHelperFunction(array, element, start, mid-1);
}

bool binarySearch(int* array, int len, int element){
	return binarySearchHelperFunction(array,element,0,len-1);
}

int* getArray(){
	int * arr = new int[14];
	arr[5] = 23;
	return arr;
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
	/*
	int * result = getArray();
	cout << result[5] << endl;
	delete[] result;
	*/

	//static allocated 2d array
	//int arr2[4][3];
	//cout << arr2 << endl;
	/*
	//for single variable manual memory allocation
	int * var = new int;
	delete var;
	*/
	int rows;
	int cols;
	cin >> rows >> cols;
	//error too big for the stack
	//int arr2[10000][10000];

	char** arr = new char*[rows];
	for(int i=0;i<rows;i++){
		arr[i] = new char[cols];
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin >> arr[i][j];
		}
	}
	cout << "======" << endl;
	
	cout << canReachGoal(arr, rows, cols, 0, 0) << endl;

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<rows;i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
#include<iostream>
#include<cstring>
#include"secondfile.h"
#define MAX_SIZE 50
using namespace std;

char goal = 'G';
char wall = '#';
char player = 'S';
char empty = '.';
char visited = 'X';

bool hasPath(char** arr, int row, int col, int currentRow, int currentCol){
	if(currentCol<0 || currentCol >= col){
		return false;
	}
	if(currentRow<0 || currentRow >= row){
		return false;
	}
	if(arr[currentRow][currentCol]==goal){
		return true;
	}
	if(arr[currentRow][currentCol]==wall){
		return false;
	}
	if(arr[currentRow][currentCol]==visited){
		return false;
	}
	arr[currentRow][currentCol] = visited;

	return hasPath(arr,row,col, currentRow-1, currentCol) ||
			hasPath(arr,row,col, currentRow, currentCol-1) ||
			hasPath(arr,row,col, currentRow+1, currentCol) ||
			hasPath(arr,row,col, currentRow, currentCol+1) ;
}
int main(){
	/*
	int rows = 5;
	int cols = 5;
	int arr[MAX_SIZE];
	
	//dynamic allocated 2d array
	char** array = new char*[rows];
	for(int i=0;i<rows;i++){
		array[i] = new char[cols];
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin >> array[i][j];
		}
	}
	cout << "========" << endl;
	cout << hasPath(array, rows, cols, 0,0) << endl;
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
	*/
	char str2[6];
	char str1[60];
	/*
	cin >> str1;
	cout << strlen(str1) << endl;
	strncpy(str2,str1,5);
	cout << str2 << endl;
	*/
	cin >> str1;
	cin >> str2;
	cout << strcmp(str1,str2) << endl;
	//cout << average(4.0,5.0) << endl;
	return 0;
}

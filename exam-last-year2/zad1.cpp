#include<iostream>
using namespace std;

int countOccurences(unsigned int* arr, int size, int element);

//returns  true if arr1 is permutation of arr2
bool isPermutation(unsigned int* arr1, int size1, unsigned int* arr2,int size2){
    for(int i=0;i<size1;i++){
        int firstColumnCount = countOccurences(arr1, size1, arr1[i]);
        int secondColumnCount = countOccurences(arr2, size2, arr1[i]);
        if(firstColumnCount!=secondColumnCount){
            return false;
        }
    }
    return true;
}

void printPermutationIndices(unsigned int** table, int cols, int rows){
    bool hasPerm = false;
    for(int i=0;i<cols;i++){
        for(int j=i;j<cols;j++){
            if(i!=j){
                if(isPermutation(table[i],rows,table[j],rows)){
                    hasPerm = true;
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    if(hasPerm==false){
        cout << "No" << endl;
    }
}

int countOccurences(unsigned int* arr, int size, int element){
    int counter = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            counter++;
        }
    }
    return counter;
}

int main(){
    int n, m;
    cin >> n >> m;

    unsigned int ** table = new unsigned int*[m];
    for(int i=0;i<m;i++){
        table[i]= new unsigned int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> table[j][i];
        }
    }
    printPermutationIndices(table,m,n);
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << table[j][i] << " ";
        }
        cout << endl;
    }
    */
    for(int i=0;i<m;i++){
        delete[] table[i];
    }
    delete[] table;
    return 0;
}
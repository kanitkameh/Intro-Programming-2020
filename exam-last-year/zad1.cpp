#include<iostream>
using namespace std;

int countElementOccurence(unsigned int** table, int rows, int column, int element){
    int occurences = 0;
    for(int i=0;i<rows;i++){
        if(table[i][column]==element){
            occurences++;
        }
    }
    return occurences;
}

//checks if colX is a permutation of colY
bool isPermutation(unsigned int** table, int rows,int  cols, int colX, int colY){
    for(int i=0;i<rows;i++){
        unsigned int current = table[i][colX];
        int timesInX = countElementOccurence(table,rows,colX,current);
        int timesInY = countElementOccurence(table,rows,colY,current);
        if(timesInX!=timesInY){
            return false;
        }
    }
    return true;
}

void printPermutationPair(unsigned int** table, int rows, int cols){
    bool printed = false;
    for(int i=0;i<cols;i++){
        for(int j=i;j<cols;j++){
            if(i!=j){
                if(isPermutation(table,rows,cols,i,j)){
                    cout << i << " " << j << endl;
                    printed = true;
                }
            }
        }
    }
    if(printed == false){
        cout << "No" << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    unsigned int ** table = new unsigned int*[n];
    for(int i=0;i<n;i++){
        table[i] = new unsigned int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> table[i][j];
        }
    }

    printPermutationPair(table,n,m);

    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    */

    for(int i=0;i<n;i++){
        delete[] table[i];
    }
    delete[] table;
    return 0;
}
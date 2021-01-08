#include<iostream>
using namespace std;
/*
0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 0 0 0 1 0
0 0 1 1 0 0 1 0 0 0
0 0 0 0 0 1 1 1 0 0
*/
void removeLand(bool** table, int rows, int cols,
                                int i,int j){
    if(i<0 || j<0 || i>=rows || j>=cols || table[i][j]==0){
        return;
    }
    table[i][j]=0;
    removeLand(table,rows,cols,i+1,j);
    removeLand(table,rows,cols,i-1,j);
    removeLand(table,rows,cols,i,j+1);
    removeLand(table,rows,cols,i,j-1);
}
int islandCount(bool** table, int rows, int cols){
    int count = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(table[i][j]){
                count++;
                removeLand(table,rows,cols,i,j);
            }
        }
    }
    return count;
}

void inputTable(bool** table, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> table[i][j];
        }
    }
}
void outputTable(bool** table, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cout << sizeof(bool) << endl;
    int rows, cols;
    cin >> rows >> cols;
    bool** table = new bool*[rows];
    for(int i=0;i<rows;i++){
        table[i] = new bool[cols];
    }
    inputTable(table,rows,cols);
    cout << islandCount(table,rows,cols) << endl;
    //outputTable(table,rows,cols);
    for(int i=0;i<rows;i++){
        delete[] table[i];
    }
    delete[] table;
    return 0;
}
#include<iostream>
using namespace std;
/*
0 0 1 0 0 0 0 0 0 1
0 1 1 1 0 0 0 1 0 1
0 0 1 1 0 0 1 1 0 0
1 0 0 0 0 0 0 0 0 1
*/

void inputTable(int ** table, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> table[i][j];
        }
    }
}
void outputTable(int ** table, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void removeIsland(int** table, int rows, int cols, int i, int j){
    if(i<0 || j<0 || i>=rows || j>=cols || table[i][j]==0){
        return;
    }
    table[i][j]=0;
    removeIsland(table,rows,cols,i+1,j);
    removeIsland(table,rows,cols,i-1,j);
    removeIsland(table,rows,cols,i,j+1);
    removeIsland(table,rows,cols,i,j-1);
}
int islandCount(int** table, int rows, int cols){
    int count = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(table[i][j]==1){
                removeIsland(table,rows,cols,i,j);
                count++;
            }
        }
    }
    return count;
}
int main(){
    int rows, cols;
    cin >> rows >> cols;
    int** table = new int*[rows];
    for(int i=0;i<rows;i++){
        table[i] = new int[cols];
    }
    inputTable(table,rows,cols);
    cout << islandCount(table,rows,cols);
    //outputTable(table,rows,cols);
    for(int i=0;i<rows;i++){
        delete[] table[i];
    }
    delete[] table;
    return 0;
}
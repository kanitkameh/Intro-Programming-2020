#include<iostream>
using namespace std;
int * getEvenNumbers(int * arr, int n, int * evenCount){
    *evenCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            (*evenCount)++;
            //cout << "test" << endl;
        }
    }
    int * result;
    result = new (nothrow) int[*evenCount];
    if(!result){
        cerr << "bad allocation" << endl;
        return nullptr;
    }

    int currentIndex = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            result[currentIndex] = arr[i];
            currentIndex++;
        }
    }
    return result;
}
bool isAlive(int ** table, int rows, int columns, int i,
            int j){
                if(j<0 || i<0 || i>=rows || j>=columns){
                    return false;
                }
                return table[i][j]!=0;
            }
int getLiveNeighbors(int** table, int rows, int columns, 
                    int i, int j){
        int count = 0;
        if(isAlive(table,rows,columns,i,j+1)){count++;}
        if(isAlive(table,rows,columns,i+1,j)){count++;}
        if(isAlive(table,rows,columns,i+1,j+1)){count++;}
        if(isAlive(table,rows,columns,i,j-1)){count++;}
        if(isAlive(table,rows,columns,i-1,j)){count++;}
        if(isAlive(table,rows,columns,i-1,j-1)){count++;}
        if(isAlive(table,rows,columns,i-1,j+1)){count++;}
        if(isAlive(table,rows,columns,i+1,j-1)){count++;}
        return count;
    }
void conway(int** table, int rows, int columns){
    int** temp = new(nothrow) int *[rows];
    if(!temp){
        cerr << "error allocating memory" << endl;
    }
    for(int i=0;i<rows;i++){
        temp[i] = new(nothrow) int[columns];
        if(!temp[i]){
            cerr << "error allocating memory" << endl;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            int aliveNeighbors = getLiveNeighbors(table,
                rows,columns, i, j);
            if(isAlive(table,rows,columns,i,j) 
                && (aliveNeighbors==2 || 
                                aliveNeighbors==3)){
                temp[i][j] = 1;
            }else if(!isAlive(table,rows,columns,i,j) &&
                aliveNeighbors==3){
                temp[i][j] = 1;
            }else{
                temp[i][j] = 0;
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            table[i][j] = temp[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        delete[] temp[i];
    }
    delete[] temp;
}
void inputTable(int** table,int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> table[i][j];
        }
    }
}
void outputTable(int** table,int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void func(int i, int n){
    if(i>=n){
        return;
    }
    cout << i << endl;
    func(i+1,n);
}

int main(){
    /*int a = 15;
    int* pointer = &a;
    cout << &a << endl;
    cout << pointer << " " << *pointer << endl;*/
    /*int arr[3];
    arr[0] = 15;
    arr[1] = 32;
    arr[2] = 78;
    //*(arr+i) <==> arr[i]
    cout << arr << " " << *(arr+2) << endl;*/

    /*int arr[4];
    arr[0] = 24;
    arr[1] = 11;
    arr[2] = 78;
    arr[3] = 13;
    int evenCount = 0;
    int * evenNumbers = getEvenNumbers(arr,4,&evenCount);
    
    cout << evenCount << endl;
    for(int i = 0;i<evenCount;i++){
        cout << evenNumbers[i] << endl;
    }
    delete[] evenNumbers;
    evenNumbers=nullptr;
    */
    /*
    int arr[3][4];
    arr[0][1] = 12;
    */
    
    int rows = 10;
    int columns = 20;
    cin >> rows >> columns;
    int** table = new int*[rows];
    for(int i=0;i<rows;i++){
        table[i] = new int[columns];
    }
    inputTable(table,rows,columns);
    conway(table,rows,columns);
    cout << "=====================" << endl;
    outputTable(table,rows,columns);
    //cout << table[4][5] << endl;
    for(int i=0;i<rows;i++){
        delete[] table[i];
    }
    delete[] table;
    /*
    int n = 25;
    for(int i=0;i<n;i++){
        cout << i << endl;
    }
    */
    //func(0,10);
    /*
    char str[64];
    cin.getline(str,64,';');
    cout << str << endl;
    */
    return 0;
}

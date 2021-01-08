#include<iostream>
using namespace std;

void printIntInBinary(int number, int i){
    if(i==0){
        return;
    }
    cout << ((number >> (i - 1)) & 1);
    printIntInBinary(number,i-1);
}

int main(){
    //int n;
    //cin >> n;
    //printIntInBinary(n,sizeof(int)*8);
    float a;
    cin >> a;
    printIntInBinary( * (int *) &a,sizeof(float)*8);
    cout << endl;
    //cout << a << endl;
    //cout << sizeof(float) << endl;
    return 0;
}
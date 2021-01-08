#include<iostream>
using namespace std;

void printIntInBinary(int number,int i){
    if(i<0){
        return;
    }
    cout << ((number >> i) & 1);
    printIntInBinary(number,i-1);
}

int readBinaryInt(){
    int result = 0;
    for(int i=0;i<32;i++){
        char c;
        cin >> c;
        if(c=='1'){
            result = result << 1;
            result = result | 1;
        }
        if(c=='0'){
            result = result << 1;
        }
    }
    return result;
}

int main(){
    /*
    int n;
    cin >> n;
    printIntInBinary(n,sizeof(int)*8 - 1);
    cout << endl;
    unsigned int bin = readBinaryInt();
    cout << bin;
    cout << endl;*/
    float a;
    cin >> a;
    printIntInBinary(*(int*) &a,sizeof(float)*8 - 1);
    cout << endl;
    return 0;
}
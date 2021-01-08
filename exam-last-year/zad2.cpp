#include<iostream>
using namespace std;
bool areEqualAfterErasure(int i, int num1, int num2){
    if(num1==num2){
        return true;
    }
    if(num2>=0 && num2<=9){
        return false;
    }
    loop(0,length(num2),num2,num1);
}

int getAfterErasure(int number, int index){
    if(index==0){
        return number/10;
    }
    return getAfterErasure(number/10,index-1)*10+(number%10);
}

int length(int num){
    if(num>=0 && num<=9){
        return 1;
    }
    return length(num/10)+1;
}

bool loop(int i, int length, int num2, int num1){
    int current = getAfterErasure(num2,i);
    if(num1==current){
        return true;
    }
    if(i==length-1){
        return false;
    }
    loop(i+1,length, num2, num1);
}

int main(){
    int num, position;
    //cin >> num >> position;
    //cout << getAfterErasure(num,position) << endl;
    //loop(0,20);
    cin >> num;
    cout << length(num) << endl;
    return 0;
}
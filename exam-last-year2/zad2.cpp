#include<iostream>

using namespace std;
//returns the number of digits in an integer
int length(int number){
    if(number>=0 && number<=9){
        return 1;
    }
    return 1+length(number/10);
}

int removeDigit(int number, int digitPosition){
    if(digitPosition==0){
        return number/10;
    }
    /*
    if(number>=0 && number<=9){
        return number;
    }*/
    return removeDigit(number/10,digitPosition-1)*10 + number%10;
}

//returns true if a can be represented from b by removing digits
bool areSame(int a, int b, int i){
    if(a==b){
        return true;
    }
    if(1==length(b)){
        return false;
    }
    if(i==length(b)){
        return false;
    }
    
    int nextB = removeDigit(b,i);
    
    return areSame(a,nextB,0) || areSame(a,b,i+1);
}

//loop example with condition i<length
void loop(int i,int length){
    if(i==length){
        return;
    }
    cout << i << endl;
    i++;
    loop(i,length);
}

int main(){
    //loop(0,20);
    //cout << removeDigit(1092,2)<<endl;
    /*int number1, number2;
    cin >> number1 >> number2;
    cout << areSame(number1,number2,0) << endl;*/
    
    int a, b;
    cin >> a >> b;


    cout << (areSame(b,a,0) || areSame(a,b,0)) << endl;
    return 0;
}
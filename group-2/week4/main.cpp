#include<iostream>
#include<math.h>
using namespace std;

/*
Description: Increments the value
int x: the value to be incremented
returns int: the incremented value
*/
int increment(int x){
    x++;
    return x;
}
bool isEven(int x){
    return x%2==0;
}
int incrementIfTrue(int x, bool func(int)){
    if(func(x)){
        x++;
    }
    return x;
}

int nthFibbRecursive(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return nthFibbRecursive(n-1)+nthFibbRecursive(n-2);
}
int nthFibbIterative(int n){
    int a = 0;
    int b = 1;
    for(int i=3;i<=n;i++){
        b=b+a;
        a=b-a;
    }
    if(n==1){
        return a;
    }else if(n==2){
        return b;
    }else{
        return b;
    }
}
int main(int argc, char *argv[]){
    /*
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
            }
        }
        if(isPrime){
            cout << i << endl;
        }
    }*/
    /*
    char x;
    cout << "What do you want to buy?" << endl;
    cout << "Press 'p' for pizza or 'h' for hamburger" << endl;
    cin >> x;
    switch(x){
    case 'h': cout << "Here is your hamburger" << endl;
        break;
    case 'p': cout << "Here is your pizza" << endl;
        break;
    default: cout << "Invalid order" << endl;
        break;
    }*/
    int n;
    cin >> n;
    //int x = 6;
    //cout << increment(x) << endl;
    //cout << sqrt(25.0) << endl;
    //cout << incrementIfTrue(x,isEven) << endl;
    cout << nthFibbRecursive(n) << endl;
    cout << nthFibbIterative(n) << endl;
    return 0;
}
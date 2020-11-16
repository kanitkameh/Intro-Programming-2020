#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*
Description: increments the number
int x: the number to be incremented
returns int: the incremented number
*/
/*
int increment(int x){
        if(x==0){
            return 1;
        }
        cout << "hello" << endl;
        x++;
        return x;
        cout << "test123" << endl;
}
*/
int findKthDigit(int num, int k){
    if(k==1){
        return num/100;
    }
    if(k==2){
        return (num/10)%10;
    }
    if(k==3){
        return num%10;
    }
}
int findBiggest(int a, int b){
    if(a>b)
        return a;
    return b;
}
int findBiggest(int a, int b, int c){
    return findBiggest(findBiggest(a,b),c);
}
int main(){
    /*
    int y=1;
    auto increment = [y](int x){
        if(x==0){
            return 1;
        }
        cout << "hello" << endl;
        x++;
        return x;
        cout << "test123" << endl;
    };
    /*
    int n;
    cin >> n;
    //print squares
    /*for(int i=1;i*i<=n;i++){
        cout << i*i << endl;
    }*/
    //print prime numbers
    /*
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                isPrime=false;
            }
        }
        if(isPrime){
            cout << i << endl;
        }
    }*/
    /*
    cout << "what do you want to buy?" << endl;
    cout << "Press 1 for pizza , press 2 for burger" << endl;
    int n;
    cin >> n;
    switch(n){
    case 1: cout << "You have bought pizza" << endl;
        break;
    case 2: cout << "You have bought burger" << endl;
        break;
    default: cout << "Invalid order" << endl;
        break;
    }*/

    //cout << increment(15) << endl;

    //Ex.1
    int b, c, d, k;
    cin >> b >> c >> d >> k;
    b = findKthDigit(b,k);
    c = findKthDigit(c,k);
    d = findKthDigit(d,k);
    if(!(b>4)){
        b = -1;
    }
    if(!(c>4)){
        c = -1;
    }
    if(!(d>4)){
        d = -1;
    }
    if(b==c && c==d && d==-1){
        cout << "No" << endl;
    }else{
        cout << findBiggest(b,c,d) << endl;
    }
    return 0;
}


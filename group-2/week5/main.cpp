#include<iostream>
#include<math.h>
using namespace std;

bool orFunc(bool a, bool b){
    return a || b;
}

bool andFunc(bool a, bool b){
    return a && b;
}

bool isEven(int n){
    return n%2==0;
}

int apply(int n, int n2, bool func(int), bool predicate(bool,bool)){
    return predicate(func(n),func(n2));
}

int increment(int n){
    cout << "test" << endl;
    n=n+1;
    return n;    
}

int numberOfDigits(int n){
    int result=0;
    while(n!=0){
        n=n/10;
        result++;
    }
    return result;
}

int findKthDigitRightToLeft(int n, int k){
    n=n/pow(10,k-1);
    return n%10;
}

int findKthDigit(int n, int k){
    n=n/pow(10,numberOfDigits(n)-k);
    return n%10;
}

int bigger(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int bigger(int a, int b, int c){
    return bigger(bigger(a,b),c);
}

int main(){
    /*
    //cin >> n;
    //cout << apply(3,6,isEven,orFunc)<<endl;
    //cout << findKthDigit(5607234,2);
    int b,c,d,k;
    cin >> b >> c >> d;
    cin >> k;
    b = findKthDigit(b,k);
    c = findKthDigit(c,k);
    d = findKthDigit(d,k);
    if(!(9+(b-5)>8)){
        b=-1;
    }
    if(!(9+(c-5)>8)){
        c=-1;
    }
    if(!(9+(d-5)>8)){
        d=-1;
    }
    if(b==-1 && c==-1 && d==-1){
        cout << "No" << endl;
    }else{
        cout << bigger(b,c,d) << endl;
    }
    */
    /*
    int z = 12;
    int a = 37;
    int y = 15;
    int* b = &a;
    int** c = &b;
     
    cout << "z:" << z << " &z:"<<&z<< endl;
    cout << "a:" << a << " &a:"<<&a<< endl;
    cout << "y:" << y << " &y:"<<&y<< endl;

    cout << "b:" << b << " &b:"<<&b<< " *b:" << *b << endl;
    cout << "c:" << c << " &c:"<<&c<< " *c:" << *c << endl;
    cout << "z:" << b[1] << endl;
    cout << "y:" << b[-1] << endl;
    */
    int array[5];
    for(int i=0;i<5;i++){
        cin >> array[i];
    } 
    int result=0;
    for(int i=0;i<5;i++){
        result += array[i];
    } 
    cout << result << endl;
    return 0;
}
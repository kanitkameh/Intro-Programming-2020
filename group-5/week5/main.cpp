#include<iostream>
#include<math.h>
using namespace std;
int sum(int a, int b){
    int result=a+b;
    return result;
}
int fibbRecursive(int position){
    if(position==0){
        return 0;
    }
    if(position==1){
        return 1;
    }
    return fibbRecursive(position-1) + fibbRecursive(position-2);
}
int numberOfDigits(int n){
    int result=0;
    while(n!=0){
        n/=10;
        result++;
    }
    return result;
}
int findKthDigit(int n, int k){
    n=n/pow(10,numberOfDigits(n)-k);
    return n%10;
}
bool isPrimeHelper(int n, int currentDivisor){
    if(currentDivisor==1){
        return true;
    }
    if(n%currentDivisor==0){
        return false;
    }
    return true && isPrimeHelper(n, currentDivisor-1);
}
bool isPrime(int n){
    return isPrimeHelper(n,n-1);
}
int increment(int n){
    return n+1;
}
int add(int n1, int n2){
    return n1+n2;
}
int substract(int n1, int n2){
    return n1-n2;
}
int multiply(int n1, int n2){
    return n1*n2;
}
bool isZero(int n){
    return n==0;
}
int apply(int n, int n2, int other(int,int), bool predicate(int)){
    return predicate(other(n,n2));
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int factItarative(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}
int fibbIterative(int position){
    int an0=0;
    int an1=1;
    int result;
    if(position==0){
        return an0;
    }
    if(position==1){
        return an1;
    }
    for(int i=2;i<position;i++){
       result=an0+an1; 
       an0=an1;
       an1=result;
    }
    return result;
}
int main(){
    int a = 16;
    int* b = &a;
    cout << "a:" << a << " &a:" << &a << endl;
    cout << "b:" << b << " &b:" << &b << endl;
    cout << *b << endl;
}

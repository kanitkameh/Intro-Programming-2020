#include<iostream>
#include<vector>
#include <iomanip>      // std::setprecision
using namespace std;
void IntsAndCharsDemo(){
    int n=15; //number
    char c='a';//character
    cout << n << endl;
    cout << c << endl;
}

//bools are allowed to take two values(false and true)
void boolDemo(){
    bool falseBool = false;
    //bool falseBool = 0;
    cout << falseBool << endl;

    bool trueBool = true;
    //bool trueBool = 1;
    //bool trueBool = 123;
    cout << trueBool << endl;
}

void doubleFloatDemo(){
    //float vs double precision
    float fraction = 1.0/3.0;
    cout << setprecision(12) << fraction << endl;
    double bigFraction = 1.0/3.0;
    cout << setprecision(12) << bigFraction << endl;
    //casting demo
    bigFraction = (double)1/(double)3;
    cout << bigFraction << endl;
}

int main(){
    doubleFloatDemo();
    return 0;
}
#include<iostream>

using namespace std;
int main(){
    bool a1,a2,a3,a4,b1,b2,b3,b4;
    bool r1,r2,r3,r4,r5;
    cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;
    //cout << a1 << a2 << a3 << a4 << b1 << b2 << b3 << b4;
    bool carryIn=0;
    
    r4 = (a4 ^ b4) ^ carryIn;
    carryIn = a4 & b4;

    r3 = (a3 ^ b3) ^ carryIn;
    carryIn = (a3 & b3) || (a3 & carryIn) || (b3 & carryIn);
    
    r2 = (a2 ^ b2) ^ carryIn;
    carryIn = (a2 & b2) || (a2 & carryIn) || (b2 & carryIn);

    r1 = (a1 ^ b1) ^ carryIn;
    carryIn = (a1 & b1) || (a1 & carryIn) || (b1 & carryIn);

    cout << carryIn << " " << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
}
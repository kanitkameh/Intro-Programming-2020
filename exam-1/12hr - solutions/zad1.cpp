#include<iostream>
using namespace std;
int main(){
    bool a1,a2,a3; //the three bits of the first number
    bool b1,b2,b3; //the three bits of the second number
    bool r1=false,r2=false,r3=false,r4=false,r5=false,r6=false; //the bits of the result
    bool carryIn = false;
    bool nextCarry = false;

    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;

    //add a to r
    if(b1==true){
        //bit 1
        nextCarry = (r1 & a1) || (r1 & carryIn) || (a1 & carryIn);
        r1 = r1 ^ a1 ^ carryIn;
        carryIn = nextCarry;
        //bit 2
        nextCarry = (r2 & a2) || (r2 & carryIn) || (a2 & carryIn);
        r2 = r2 ^ a2 ^ carryIn;
        carryIn = nextCarry;
        //bit 3
        nextCarry = (r3 & a3) || (r3 & carryIn) || (a3 & carryIn);
        r3 = r3 ^ a3 ^ carryIn;
        carryIn = nextCarry;
        //bit 4
        nextCarry = (r4 & carryIn);
        r4 = r4 ^ carryIn;
        carryIn = nextCarry;
        //bit 5
        nextCarry = (r5 & carryIn);
        r5 = r5 ^ carryIn;
        carryIn = nextCarry;
        //bit 6
        nextCarry = (r6 & carryIn);
        r6 = r6 ^ carryIn;
        carryIn = nextCarry;
    }
    if(b2==true){
        //bit 1
        nextCarry = (r1 & carryIn);
        r1 = r1 ^ carryIn;
        carryIn = nextCarry;
        //bit 2
        nextCarry = (r2 & a1) || (r2 & carryIn) || (a1 & carryIn);
        r2 = r2 ^ a1 ^ carryIn;
        carryIn = nextCarry;
        //bit 3
        nextCarry = (r3 & a2) || (r3 & carryIn) || (a2 & carryIn);
        r3 = r3 ^ a2 ^ carryIn;
        carryIn = nextCarry;
        //bit 4
        nextCarry = (r4 & a3) || (r4 & carryIn) || (a3 & carryIn);
        r4 = r4 ^ a3 ^ carryIn;
        carryIn = nextCarry;
        //bit 5
        nextCarry = (r5 & carryIn);
        r5 = r5 ^ carryIn;
        carryIn = nextCarry;
        //bit 6
        nextCarry = (r6 & carryIn);
        r6 = r6 ^ carryIn;
        carryIn = nextCarry;
    }
    if(b3==true){
        //bit 1
        nextCarry = (r1 & carryIn);
        r1 = r1 ^ carryIn;
        carryIn = nextCarry;
        //bit 2
        nextCarry = (r2 & carryIn);
        r2 = r2 ^ carryIn;
        carryIn = nextCarry;
        //bit 3
        nextCarry = (r3 & a1) || (r3 & carryIn) || (a1 & carryIn);
        r3 = r3 ^ a1 ^ carryIn;
        carryIn = nextCarry;
        //bit 4
        nextCarry = (r4 & a2) || (r4 & carryIn) || (a2 & carryIn);
        r4 = r4 ^ a2 ^ carryIn;
        carryIn = nextCarry;
        //bit 5
        nextCarry = (r5 & a3) || (r5 & carryIn) || (a3 & carryIn);
        r5 = r5 ^ a3 ^ carryIn;
        carryIn = nextCarry;
        //bit 6
        nextCarry = (r6 & carryIn);
        r6 = r6 ^ carryIn;
        carryIn = nextCarry;
    }
    cout << r6 << r5 << r4 << r3 << r2 << r1 << endl;
    return 0;
}
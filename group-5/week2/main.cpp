#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    /*float a=4;
    float b=-7;
    float c=3;
    float discr = b*b -4*a*c;
    //cout << discr << endl;
    if(discr>0){
        float x1=(-b+sqrt(discr))/(2*a);
        float x2=(-b-sqrt(discr))/(2*a);
        //cout << x1 << " " << x2 << endl;
    }else if(discr==0){
        float x = -b/2*a;
        //cout << x << endl;
    }else{
        //cout << "No real roots" << endl;
    }
    //b = b + 2;
    //b += 2;


    bool mybool2=false;
    bool mybool = mybool | 123;
    mybool2 |= 123;

    cout << "hello world 2";*/
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int max = a;
    int min = a;
    if(min>b){
        min = b;
    }
    if(min>c){
        min = c;
    }
    if(min>d){
        min = d;
    }
    if(min>e){
        min = e;
    }
    if(min>f){
        min = f;
    }
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    if(max<d){
        max = d;
    }
    if(max<e){
        max = e;
    }
    if(max<f){
        max = f;
    }
    cout << (a+b+c+d+e+f-min-max)/4 << endl;
    return 0;
}

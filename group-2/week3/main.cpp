#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //while loop
    /*
    int n=0;
    do{
        cout << n << endl;
        n++;
    }while(n<10);*/
    //do while loop
    /*int n=0;
    while(false){
        cout << n << endl;
        n++;
    }*/
    //scope
    /*
    int x;
    if(true){
       int x = 15;
       cout << x;
    }
    cout << x;*/
    //for loop
    /*for(int i=0;i<10;i++){
        cout << i << endl;
    }*/
    //literals
    /*
    int x = 123;
    char c = 'K';
    bool b = true;
    */
    //Ex.1
    /*
    float k, n , m;
    cin >> n >> k >> m;
    float sol = n-(k+m-k/2);
    //int brashno = k/2;
    //int zahar = k/2;
    //int oriz = m-brashno;
    //int sol = n - (brashno+zahar+oriz);
    cout << sol << endl;*/
    //Ex2
    /*
    long long a, b, c;
    cin >> a >> b >> c;
    if((a<b && b<c)||(a>b && b>c)){
        cout << b << endl;
    }else if((b<a && a<c) || (c<a && a<b)){
        cout << a << endl;
    }else{
        cout << c << endl;
    }*/
    //cout << sizeof(long long) << endl;
    //Ex3
    /*
    int m1, s1, i1,
        m2, s2, i2,
        m3, s3, i3;
    cin >> m1 >> s1 >> i1;
    cin >> m2 >> s2 >> i2;
    cin >> m3 >> s3 >> i3;

    s1 = m1*60 + s1 + (5-i1)*30;
    s2 = m2*60 + s2 + (5-i2)*30;
    s3 = m3*60 + s3 + (5-i3)*30;

    if(s1<s2 && s1<s3){
        cout << s1/60 << " " << s1%60 << " " << 'A' << endl;
    }else if(s2<s1 && s2<s3){
        cout << s2/60 << " " << s2%60 << " " << 'B' << endl;
    }else{
        cout << s3/60 << " " << s3%60 << " " << 'C' << endl;
    }*/
    /*
    5
    *****
    ****
    ***
    **
    *
    */

    int n;
    cin >> n;
    for(int j=0;j<n*2;j+=2){
        for(int s=0;s<n-j/2;s++){
            cout << " ";
        }
        for(int i=0;i<j;i++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


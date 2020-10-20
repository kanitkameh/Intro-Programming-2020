#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    /*///literals
    int x = 0;
    char c = 'K';
    char c2 = c;
    bool b = true;*/
    /*//while loop
    int n=0;
    while(n<10){
        n++;
        cout << n << endl;
    }*/
    /*
    int x = 0;
    do{
        x++;
        cout << x << endl;
    }while(x<10);
    */
    /*
    ///for loop
    for(int i=0;i<10;i++;){
        cout << i << endl;
    }
    cout << "hello" << endl;
    */
    //cout << x << endl;
    /*//zad1
    float n, k, m;
    cin >> n >> k >> m;
    float zahar = k/2;
    float brashno = k/2;
    float oriz = m - brashno;
    float sol = n - (zahar + brashno + oriz);

    cout << sol << endl;
    //cout << (n-m)-k/2 << endl;
    */
    /*///zad2
    unsigned long long a, b, c;
    cin >> a  >> b >> c;
    if((a>b && a<c)||(a<b && a>c)){
        cout << a << endl;
    }else if((b>a && b<c)||(b<a && b>c)){
        cout << b << endl;
    }else{
        cout << c << endl;
    }*/
    /*
    int m1, s1, i1,
        m2, s2, i2,
        m3, s3, i3;
    cin >> m1 >> s1 >> i1;
    cin >> m2 >> s2 >> i2;
    cin >> m3 >> s3 >> i3;

    for(int i=0;i<5-i1;i++){
        s1+=30;
        if(s1>=60){
            m1++;
            s1-=60;
        }
    }
    for(int i=0;i<5-i2;i++){
        s2+=30;
        if(s2>=60){
            m2++;
            s2-=60;
        }
    }
    for(int i=0;i<5-i3;i++){
        s3+=30;
        if(s3>=60){
            m3++;
            s3-=60;
        }
    }

    cout << m1 << " " << m2 << " " << m3;
    if(m1<m2 && m1<m3){
        cout << m1 << " " << s1 << " " << 'A';
    }else if(m2<m1 && m2<m3){
        cout << m2 << " " << s2 << " " << 'B';
    }else if(m3<m1 && m3<m2){
        cout << m3 << " " << s3 << " " << 'C';
    }else if(s1<s2 && s1<s3){
        cout << m1 << " " << s1 << " " << 'A';
    }else if(s2<s1 && s2<s3){
        cout << m2 << " " << s2 << " " << 'B';
    }else{
        cout << m3 << " " << s3 << " " << 'C';
    }*/
    long long m1, s1, i1,
        m2, s2, i2,
        m3, s3, i3;
    cin >> m1 >> s1 >> i1;
    cin >> m2 >> s2 >> i2;
    cin >> m3 >> s3 >> i3;
    s1 = s1 + (m1*60) + (5-i1)*30;
    s2 = s2 + (m2*60) + (5-i2)*30;
    s3 = s3 + (m3*60) + (5-i3)*30;

    if(s1<s2 && s1<s3){
        cout << s1/60 <<" " << s1%60 << " " << 'A' << endl;
    }
    if(s2<s1 && s2<s3){
        cout << s2/60 << " " << s2%60 << " "<< 'B' << endl;
    }
    if(s3<s1 && s3<s2){
        cout << s3/60 << " " << s3%60 << " " << 'C' << endl;
    }
    return 0;
}


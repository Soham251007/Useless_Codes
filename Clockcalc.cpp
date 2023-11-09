#include <iostream>
using namespace std;
// made by Soham Singh agar copy hua to tu gaya MKC
int main(){
    double h, m, c, d, e, f;// note: h is hrs and m is mins
    cout<<"Enter the hrs part of the time BSDK"<<endl;
    cin>>h;
    cout<<"Enter the minute part of the time BSDK"<<endl;
    cin>>m;

    if(h<0 || m<0 || m>60){
        cout<<"Galat input broooooo";
    }

    if(h == 12){
        h = 0;
    }

    if(m == 60){
        m = 0;
    }

    if (h>12){
        h = h-12;
    }

    float hrs_ang = 0.5 * (h * 60 + m);
    float min_ang = 6 * m;

    float ang = abs( hrs_ang - min_ang);
    ang = (360 - ang, ang);

    cout<<ang;

    return 0;
}
// saale wapas bol rha hu copy mat karna BKL

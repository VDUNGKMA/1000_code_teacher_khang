#include <iostream>
using namespace std;
#include <math.h>
int giaiPT(float a, float b, float c,float &x1, float &x2){
    float delta = b*b - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        return 0;
    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(int argc, char const *argv[]){
    float a,b,c;
    float x1,x2;
    do{
        cout<<"input a (a!=0): ";
        cin>>a;
        cout<<"input b: ";
        cin>>b;
        cout<<"input c: ";
        cin>>c;
    }
    while(!a);
        int numNo = giaiPT(a,b,c,x1,x2);
    if(numNo ==0 ) {
        cout<<"equation have 0 test";
    }
    else if(numNo==1){
        cout<<"equation have 1 test x=%.4f" << x1;
    }
    else{
        cout<<"equation have 2 test "<<endl;
        cout<< "x1=" << x1<<endl;
        cout<< "x2=" << x2<<endl;
    }
}
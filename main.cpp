#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long double addition (long double a, long double b){
    return a+b;
}
long double subtraction (long double a, long double b){
    return a-b;
}
long double multiplication (long double a, long double b){
    return a*b;
}
long double division (long double a, long double b){
    return a/b;
}
long double equation (){
    int type=2;
    cout << "Choose the 4 types above" << endl;
    cout << "Type 1:\n"<< "anX + bnY = Cn" << endl;
    cout << "Type 2:\n"<< "anX + bnY + cnZ = dn" << endl;
    cout << "Type 3:\n"<< "aX^2 + bX + c = 0" << endl;
    cout << "Type 4:\n"<< "aX^3 + bX^2 + cX + d = 0" << endl;

    if (type==1){
        return -1;
    } else if (type==2){
        return -1;
    } else if (type==3){
        return -1;
    } else if (type==4){
        long double a,b,c,d;
        cout << "Type the variants 1 by 1:" << endl;
        cout << "a =";
    } else {
        cout << "Invalid type" << endl;
        return -1;
    }
}

int main() {
    cout << addition (3,4) << endl;
    cout << subtraction (3,4) << endl;
    cout << multiplication(3, 4) << endl;
    cout << division(3,4) << endl;

    //cout << operation ( random num 1, random num 2) << endl;
}
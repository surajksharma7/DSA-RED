#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num = 6;
    float num2 = 5.5;
    cout << "float and int "<< (num + num2) << endl;
    cout << "float and int explicit conversion "<< int(num + num2) << endl;


    char ch = 'A';
    int a = ch+1;
    cout << "char + 1 " << a << endl;
    cout << "char + 1 to char " << char(a) << endl;


    return 0;
}
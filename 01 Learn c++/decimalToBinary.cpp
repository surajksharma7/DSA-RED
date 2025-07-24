#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
    int binary = 0;
    int i = 0;
    while(n >0){
        int bit = n%2;
        binary = bit*pow(10,i)+binary;
        n = n/2;
        i;
    }

    return binary;
}

int main(){
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    return 0;
}
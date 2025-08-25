#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal(int num){
    int decimal = 0;
    int i = 0;

    while(num){
        int bit = num%10;
        decimal = decimal + bit*pow(2,i++);
        num = num/10;
    }
    return decimal;
}
int main(){

    int n;
    cin >> n;
    int binary = binaryToDecimal(n);
    cout << binary << endl;
    return 0;
}
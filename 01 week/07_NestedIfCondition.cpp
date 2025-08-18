#include<iostream>
using namespace std;

int main(){
    int height;
    cout << "enter height in feet" << endl;
    cin >> height;

    int weight;
    cout << "Enter weight in kg" << endl;
    cin >> weight;

    if(height >5){
        if(weight > 70){
            cout << "A"<< endl;
        }else{
            cout << "b" << endl;
        }
    }else{
        cout <<"you need complain" << endl;
    }
    return 0;
}
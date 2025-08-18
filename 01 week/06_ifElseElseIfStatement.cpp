#include<iostream>
using namespace std;

int main(){
    int budget;
    cout << "Enter your budget" << endl;
    cin>> budget;

    if (budget >= 200000){
        cout << "you can buy a scorpio" << endl;
    }
    else if(budget >= 100000 && budget <=2000000){
        cout << "you can buy other car" << endl;
    }
    else{
        cout << "you can't buy a Scorpio" << endl;
    }
    
}
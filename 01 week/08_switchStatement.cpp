#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter Your grade" << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "you got grade A" << endl;
        break;
    
    default:
        cout << "you dont get 'A' grade" << endl;
        break;
    }

}
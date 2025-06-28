#include <iostream>
using namespace std;

int main() {
    int age = 35;
    cout << "my age is " << age << endl;
    //  this is comment in C++

    // declaration
    int age1; // varaible create karte hai 

    // declaration --> jab varaible mein koi value dete hai

    // we cannot declare same varaible two times within same scope 
    age = 50;
    cout << age << endl;


    int count = 5;
    float share = 3.14;
    char ch = 'A';
    double weight = 56.987;
    bool isMale = true; // either true/1 or false/0

    cout << count << endl;
    cout << share << endl;
    cout << ch << endl;
    cout << weight << endl;
    cout << isMale << endl;

    {
        // aise decleare kar sakte hai 
        int age = 16;
        cout << age << endl;
    }
    return 0;
}

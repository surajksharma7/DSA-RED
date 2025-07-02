#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> dq;
    // basic operation pushfront, popfront, pushback, popback

    dq.push_back(10);
    dq.push_front(20);

    cout << dq.size() << endl;

    
    return 0;
}
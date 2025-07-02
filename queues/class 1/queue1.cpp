#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    q.push(5);
    q.push(51);
    q.push(54);
    q.push(100);

    cout << q.size() << endl;

    // check if queue ie empty
    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    cout << q.front() << endl;

    return 0;
}
#include <iostream>
#include <queue>
#include <stack>

using namespace std;
void reverse(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        int value = q.front();
        q.pop();
        st.push(value);
    }
    while (!st.empty())
    {
        int value = st.top();
        st.pop();
        q.push(value);
    }
}

void reverseRecursion(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int value = q.front();
    q.pop();
    reverseRecursion(q);
    q.push(value);
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    reverseRecursion(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int value)
    {
        arr = new int[value];
        size = value;
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        if (rear == size - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        return rear - front + 1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    int frontElement()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int rearElement()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.frontElement() << endl;
    cout << "Rear: " << q.rearElement() << endl;

    q.pop();
    cout << "After pop:" << endl;
    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.frontElement() << endl;

    return 0;
}

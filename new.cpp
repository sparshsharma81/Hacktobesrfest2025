#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    int front, rear;
    int size;
    int *arr;

public:
    MyQueue(int size) {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void enqueue(int data) {
        if (rear == size - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = data;
        if (front == -1) {
            front = 0;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int ans = arr[front];
        front++;
        return ans;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    return 0;
}

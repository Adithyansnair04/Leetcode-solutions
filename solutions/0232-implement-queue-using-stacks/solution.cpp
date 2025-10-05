#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {}

    void push(int x) {
        // Always push into s1
        s1.push(x);
    }

    int pop() {
        // If s2 is empty, move all elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        // Now the top of s2 is the front of the queue
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        // If s2 is empty, transfer elements from s1
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        // Return the top of s2 (front of queue)
        return s2.top();
    }

    bool empty() {
        // Queue is empty if both stacks are empty
        return s1.empty() && s2.empty();
    }
};


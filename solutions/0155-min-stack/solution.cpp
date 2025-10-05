#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> s;       // main stack
    stack<int> min_s;   // stack to track minimum values

    MinStack() {}

    void push(int val) {
        s.push(val);
        // If min_s is empty or val <= current min, push to min_s too
        if (min_s.empty() || val <= min_s.top()) {
            min_s.push(val);
        }
    }

    void pop() {
        // Pop from both stacks if top of main equals top of min_s
        if (s.top() == min_s.top()) {
            min_s.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min_s.top();
    }
};


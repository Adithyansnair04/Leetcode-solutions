#include <queue>
#include <utility> // For std::swap

class MyStack {
private:
    std::queue<int> q1; // Main queue for storing stack elements
    std::queue<int> q2; // Helper queue for the push operation

public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        // 1. Add the new element to the empty helper queue, q2.
        q2.push(x);
        
        // 2. Move all elements from q1 to q2.
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // 3. Swap the names of q1 and q2. Now q1 has the new element at the front.
        std::swap(q1, q2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        // Get the top element (front of q1)
        int topElement = q1.front();
        // Remove it from the queue
        q1.pop();
        // Return the stored value
        return topElement;
    }
    
    /** Get the top element. */
    int top() {
        // The top element of the stack is at the front of q1.
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

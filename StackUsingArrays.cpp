#include <iostream>
using namespace std;

#define SIZE 5   

class Stack {
    int arr[SIZE];  
    int ptr        

public:
    Stack() {
        ptr = -1; 
    }

    void push(int val) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow! " << val << endl;
        } else {
            top++;
            arr[top] = val;
            cout << val << " pushed into stack."<<endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!"<<endl;
        } else {
            cout << arr[top] << " popped from stack"<<endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty"<<endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty"<<endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();  // One extra pop to show underflow

    return 0;
}

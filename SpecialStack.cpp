//
//  SpecialStack.cpp
//  program 4
//
//  Created by Michael Maher on 11/21/24.
//

#include "SpecialStack.hpp"

// Push an integer onto the stack
void SpecialStack::push(int num) {
    st.push(num);
}

// pop operation
void SpecialStack::pop() {
    if (st.empty()) {
        throw 1; // Throw exception if stack is empty
    }
    st.pop();
}

// Pop an even number from the stack
void SpecialStack::popEven() {
    if (st.empty()) {
        throw 1; // Throw exception if stack is empty
    }

    stack<int> temp;
    bool foundEven = false;

    // Iterate through stack to find an even number to pop
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        if (!foundEven && top % 2 == 0) {
            foundEven = true; // Skip this even element
        } else {
            temp.push(top); // Keep other elements in temporary stack
        }
    }

    // If there is no even number, throw an exception
    if (!foundEven) {
        throw 2; // Exception for no even numbers
    }

    // Restoring to original stack
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

// Pop an odd number from the stack
void SpecialStack::popOdd() {
    if (st.empty()) {
        throw 1; // Throw exception if stack is empty
    }

    stack<int> temp;
    bool foundOdd = false;

    // Iterate through stack to find an odd number to pop
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        if (!foundOdd && top % 2 != 0) {
            foundOdd = true; // Skip this odd element
        } else {
            temp.push(top); // Keep other elements in temporary stack
        }
    }

    // If there are no odd number, throw an exception
    if (!foundOdd) {
        throw 3; // Exception for no odd numbers found
    }

    // Restore the elements back to the original stack
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

// Peek the top element of the stack
int SpecialStack::peek() {
    if (st.empty()) {
        throw 1; // Throw exception if stack is empty
    }
    return st.top();
}

// Check if the stack is empty
bool SpecialStack::empty() {
    return st.empty();
}

// Print all elements in the stack from top to bottom
void SpecialStack::printStack() {
    if (st.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

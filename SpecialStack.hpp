//
//  SpecialStack.hpp
//  program 4
//
//  Created by Michael Maher on 11/21/24.
//

#ifndef SpecialStack_hpp
#define SpecialStack_hpp

#include <stdio.h>
#include <stack>
#include <iostream>
#include <exception>
using namespace std;

class SpecialStack {
private:
    stack<int> st;

public:
    
    void push(int num);
    void pop();
    void popEven();
    void popOdd();
    int peek();
    bool empty();
    void printStack();
};

#endif /* SpecialStack_hpp */

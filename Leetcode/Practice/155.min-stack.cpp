/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> s;
    MinStack() {
        vector<int> s;
    }
    
    void push(int x) {
        s.push_back(x);
    }
    
    void pop() {
        return s.pop_back(); 
    }
    
    int top() {
        int n = s.size();
        return s[n - 1];
    }
    
    int getMin() {
        return *min_element(s.begin(), s.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end


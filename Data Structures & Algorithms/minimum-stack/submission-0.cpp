class MinStack {

private:
    stack<int> st;
    stack<int> minStack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            minStack.push(val);
        }else{
            st.push(val);
            minStack.push(min(minStack.top(), val));
        }
    }
    
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

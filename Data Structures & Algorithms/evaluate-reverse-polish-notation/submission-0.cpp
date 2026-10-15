class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> myStack;
        string tkn = " ";
        int a = 0;
        int b = 0;

        for(const string c : tokens){
           
           if(c == "+"){
                a = myStack.top(); myStack.pop();
                b = myStack.top(); myStack.pop();
                myStack.push(b + a);
           }
           else if(c == "+"){
                a = myStack.top(); myStack.pop();
                b = myStack.top(); myStack.pop();
                myStack.push(b + a);
           }
           else if(c == "-"){
                a = myStack.top(); myStack.pop();
                b = myStack.top(); myStack.pop();
                myStack.push(b - a);
           }
           else if(c == "*"){
                a = myStack.top(); myStack.pop();
                b = myStack.top(); myStack.pop();
                myStack.push(b * a);
           }
           else if(c == "/"){
                a = myStack.top(); myStack.pop();
                b = myStack.top(); myStack.pop();
                myStack.push(b / a);
           }else {
            myStack.push(stoi(c));
           }
            
        }
        return myStack.top();
    }
};

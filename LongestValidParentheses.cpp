class Solution {
public:
    int longestValidParentheses(string s) {
      
	int MAX = 0;  // denotes length of maximum valid parentheses
	stack<int> stk;
	stk.push(-1); // bottom of stack will always hold index preceding to potential start of valid parentheses
	for(int i = 0; i < size(s); i++)
		if(s[i] == '(') stk.push(i);            
		else{                
			stk.pop();
			if(stk.empty()) stk.push(i);
			else MAX = max(MAX, i - stk.top());
		}        
	return MAX;

    }
};

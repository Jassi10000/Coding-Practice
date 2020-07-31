class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        map<char, char> m = { {']','['},{')','('},{'}','{'} };
        
        for(int i=0;i<s.size();i++){
            if(s[i]== '[' || s[i] == '(' || s[i] == '{')
                stk.push(s[i]);
    
            else if(s[i]== ']' || s[i] == ')' || s[i] == '}'){
                if (stk.empty()||stk.top() != m[s[i]]) return false;
                else
                    stk.pop();
            }
        }
        return stk.empty();
    }
};

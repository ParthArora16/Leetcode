class Solution {
public:
    bool isOpenBracket(char ch){
        if(ch == '(' || ch == '{' || ch == '[')
            return true;
        return false;
    }
    bool isValidPair(char open, char close){
        if(open == '(' && close == ')')
            return true;
        else if(open == '{' && close == '}')
            return true;
        else if(open == '[' && close == ']')
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        int len = s.length();
        for(int i=0;i<len;++i){
            if(isOpenBracket(s[i])){
                st.push(s[i]);
            }else if( !st.empty() && isValidPair(st.top(), s[i])){
                st.pop();
            }else{
                return false;   
            }
        }
            return st.empty();
    }
};
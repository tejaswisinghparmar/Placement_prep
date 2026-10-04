class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char i : s){

            if(i == '{' || i == '(' || i == '['){
                st.push(i);
            }
            else{
                if(st.empty()){
                    return false;
                }

                int a = 0;

                if(i == '}'){
                    a = 1;
                }
                else if(i == ']'){
                    a = 2;
                }
                else if(i == ')'){
                    a = 3;
                }

                if((a == 1 && st.top() == '{') ||
                   (a == 2 && st.top() == '[') ||
                   (a == 3 && st.top() == '(')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};
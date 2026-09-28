#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<string> st;
    st.push("A");
    st.push("B");
    st.push("C");
    st.pop();
    st.push("D");
    while(!st.empty()){
        string s;
        s = st.top();
        st.pop();
        cout << s << " ";
    }
    return 0;
}
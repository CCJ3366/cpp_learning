#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main(){
    string s = "abca";
    unordered_set<char> st;
    for(int i = 0;i < s.size();i++){
        if(st.count(s[i])){
            cout << s[i];
            break;
        }
        st.insert(s[i]);
    }
    return 0;
}
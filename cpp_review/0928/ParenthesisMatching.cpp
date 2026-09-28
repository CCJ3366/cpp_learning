/*
题目：简单的括号匹配
日期：2026-09-28
标签：字符串 / 栈

思路：
1. 利用栈的特性记录括号的匹配

关键：
- 注意最后栈为非空也要判断为不匹配
- 在检测出不匹配后就要中断，否则会一直进行下去

复杂度：
时间 O(n)，空间 O(n)

心得：
这题让我理解了“利用栈解决特殊问题”的思路。
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s = "(()())";
    stack<char> st;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.empty()){
                cout << "no" ;
                return 0;   //注意中断循环
            }
            else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}
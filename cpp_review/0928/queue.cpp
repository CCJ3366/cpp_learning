#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    queue<string> q;
    q.push("小明");
    q.push("小红");
    q.push("小王");
    q.pop();
    q.push("小李");
    while(!q.empty()){
        string s;
        s = q.front();
        q.pop();
        cout << s << " ";
    }
    return 0;
}
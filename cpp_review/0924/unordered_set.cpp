#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    cout << s.count(10) << endl;
    cout << s.count(30) << endl;
    return 0;
}
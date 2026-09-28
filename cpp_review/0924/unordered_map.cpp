#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<char, int> mp;
    string s = "banana";
    for(char c : s){
        mp[c]++;
    }
    for(auto it : mp){
        cout << it.first << ':' << it.second << endl;
    }
    if(mp.count('a')){
        cout << "a exists." ;
    }
    return 0;
}
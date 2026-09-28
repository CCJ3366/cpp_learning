/*
题目：第一个只出现一次的字符
日期：2026-09-24
标签：字符串 / 哈希表

思路：
1. 第一次遍历：unordered_map 统计每个字符出现次数
2. 第二次遍历：按照原字符串顺序寻找 count == 1 的字符

关键：
- unordered_map 不能保证遍历顺序
- 题目要求“第一个”，所以不能直接遍历 map

复杂度：
时间 O(n)，空间 O(k)

易错点：
不要把“统计次数”和“寻找第一个”混在一起。
要保证输出不会因为特殊情况出错。

心得：
这题让我理解了“两次遍历”的思路。
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string s = "abbac";
    unordered_map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    char first_once;
    bool found = false;//注意要保证没有出现一次的字符时输出正常
    for(char c : s){//注意要按照字符串的顺序遍历，不能直接auto it : mp
        if(mp[c] == 1){
            found = true;
            first_once = c;
        }
        cout << c << ':' << mp[c] << endl;
    }
    if(found){
        cout << first_once;
    }
    else{
        cout << "no found";
    }
    return 0;
}
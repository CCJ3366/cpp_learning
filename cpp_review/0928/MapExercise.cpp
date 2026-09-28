#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    vector<int> nums = {3, 1, 3, 2, 1, 3, 2, 4};
    map<int,int> mp;
    for(size_t i = 0;i < nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it : mp){
        cout << it.first << ":" << it.second << endl;
    }
    return 0;
}
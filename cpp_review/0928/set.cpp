#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {5, 2, 8, 2, 5, 1, 8, 3};
    set<int> st;
    for(size_t i = 0;i < nums.size();i++){
        st.insert(nums[i]);
    }
    for(auto c : st){
        cout << c << " ";
    }
    return 0;
}

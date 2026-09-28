#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    for(int i = 0;i < 5;i++){
        nums.push_back(i * 2 + 1);
    }
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }
    return 0;
}
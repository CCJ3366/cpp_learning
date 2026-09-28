#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    map<string, int> student_score;
    student_score["Alice"] = 90;
    student_score["Bob"] = 85;
    student_score["Charlie"] = 92;
    student_score["David"] = 88;
    for(auto it : student_score){
        cout << it.first << ':' << it.second << endl;
    }
    return 0;
}
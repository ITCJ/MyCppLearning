#include <iostream>
#include <vector>

using namespace std;

int main () {
    // int cache;
    // vector<int> nums;

    // while (cin >> cache)
    // {
    //     nums.push_back(cache);
    // }

    string str;
    vector<string> strs;

    while (getline(cin, str))
    {
        strs.push_back(str);
    }
    
    return 0;
}
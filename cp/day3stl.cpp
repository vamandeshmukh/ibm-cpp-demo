// set, queue, list, map, unordered_map, stack, priority_queue

// map - user: rides_list  
// queue - riders_queue 
// queue - 

#include <iostream>
#include <vector> // 
#include <map> // 
#include <set> // 
#include <list> // 
#include <unordered_map> // 

using namespace std;

int main()
{

    map<string, string> codes;
    codes["KA"] = "Karnataka";
    codes["MH"] = "Maharashtra";
    codes["TG"] = "Telangana";
    codes["AP"] = "Andhra Pradesh";

    string state = codes.at("KA");
    cout << state << endl;

    vector<int> nums = {98, 96, 99, 95, 97};
    for (int num : nums)
    {
        cout << num << " ";
    }
    nums.size();
    nums.push_back(99);
    nums.size();
    nums.pop_back();
    nums.insert(nums.begin() + 2, 100);
    nums.at(2) = 101;
    nums.erase(nums.begin() + 2);
    return 0;
}

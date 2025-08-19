#include <iostream>
#include <vector>
// set queue, list, map, unordered_map, stack, priority_queue

using namespace std;

int main()
{

    vector<int> nums = {98, 96, 99, 95, 97};
    for (int num : nums)
    {
        cout << num << " ";
    }
    nums.size();
    nums.push_back(99);
    nums.size();
    nums.pop_back();

    return 0;
}
